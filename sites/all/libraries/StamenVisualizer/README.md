CIR-Reveal prototype
====================
Impact tracker log / outcome chart prototype for **CIR**.

### Requirements
Requires:
- **Node.JS**@^7.0.1
- **NPM**@^3.10.9
- **git**
- terminal application (or similar) for CLI operations

### Setup
- Clone repo
- Open terminal application and navigate to `prototype` directory inside repo.
- Install dependencies, `npm install`

### Develop
- Open terminal application and navigate to `prototype` directory inside repo.
- Start development server, `npm start`
- Open web browser and navigate to `http://localhost:8081`.
The development server will automatically refresh browser when changes are made.

To quit development server, do `control-c` in terminal application tab/window that's running the process.

### Deploy
To create the distribution code bundle, do `npm run build` in your teminal application in the `prototype` directory. Webpack will place the compiled code in the `.dist` directory. The contents of this directory should be placed in the desired directory of your web server.


## Production Notes
The application will attempt to figure out if it's within the `impact-tracker.org` domain by calling the `get_impact_url` in [`data.js`](./src/js/data.js).  If true, data will be loaded from the `/log/export?...` endpoint. If false, data will be loaded from local files specified by the `demo_data` property in the [config file](./src/config.js).

There is no attempt to load Google Analytics data dynamically yet. When a solution exists, the `get_ga_url` function in [`data.js`](./src/js/data.js) will need to be modified.

