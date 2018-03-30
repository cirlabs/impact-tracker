import webpack from 'webpack';
import HtmlWebpackPlugin from 'html-webpack-plugin';
import ExtractTextPlugin from 'extract-text-webpack-plugin';
import CopyWebpackPlugin from 'copy-webpack-plugin';
import path from 'path';

// get package json for publicPath value
let pkgJSON = require('./package.json');

// override serving app from root
let publicPath = (pkgJSON && pkgJSON.homepage) ? pkgJSON.homepage : '/';

module.exports = {
  entry: [
    'babel-polyfill',
    './src/index.js'
  ],
  output: {
    path: path.resolve(__dirname, './dist'),
    publicPath: publicPath,
    filename: 'assets/[name].[hash:8].js'
  },
  devtool: 'source-map',
  resolve: {
    extensions: ['.js', '.scss', '.json'],
    modules: ['node_modules']
  },
  module: {
    rules: [
      {
        test: /\.js$/,
        exclude: /node_modules/,
        loader: 'babel-loader',
        options: {
          presets: [
            ['es2015', { modules: false } ],
            ['stage-0']
          ]
        }
      },
      {
        test: /\.scss$/,
        use: ExtractTextPlugin.extract({
          fallback: "style-loader",
          use:'css-loader?importLoaders=2&minimize=1!postcss-loader!sass-loader?sourceMap'
        })
      },
      {
        test: /\.css$/,
        use: ExtractTextPlugin.extract({
          fallback: "style-loader",
          use:'css-loader?importLoaders=1&minimize=1!postcss-loader'
        })
      },
      {
        test: /\.json$/,
        loader: 'json-loader'
      },
      // "file" loader makes sure those assets get served by WebpackDevServer.
      // When you `import` an asset, you get its (virtual) filename.
      // In production, they would get copied to the `build` folder.
      {
        test: /\.(ico|jpg|jpeg|png|gif|eot|otf|webp|svg|ttf|woff|woff2)(\?.*)?$/,
        loader: 'file-loader',
        query: {
          name: 'assets/things/[name].[hash:8].[ext]'
        }
      },
      // "url" loader works just like "file" loader but it also embeds
      // assets smaller than specified size as data URLs to avoid requests.
      {
        test: /\.(mp4|webm|wav|mp3|m4a|aac|oga)(\?.*)?$/,
        loader: 'url-loader',
        query: {
          limit: 10000,
          name: 'assets/things/[name].[hash:8].[ext]'
        }
      },
      {
        test: /\.html$/,
        loader: "raw-loader"
      }
    ]
  },
  plugins: [
    new webpack.DefinePlugin({
      'process.env.NODE_ENV': JSON.stringify('production')
    }),
    new webpack.optimize.UglifyJsPlugin({
      compressor: {
        warnings: false,
      }
    }),
    new webpack.optimize.AggressiveMergingPlugin(),
    new ExtractTextPlugin('assets/[name].[contenthash].css'),
    new HtmlWebpackPlugin({
      template: `./src/index.html`,
      filename: `./index.html`
    }),
    new CopyWebpackPlugin([
      {
        from: './static',
        to: 'static'
      }
    ], {
      ignore: [
        '.*',
        '*.md'
      ]
    })
  ]
};