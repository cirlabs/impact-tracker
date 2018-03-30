const APP_CONFIG = {
  impact_data_feed: '/log/visualizer.json',
  targets: [
    {
      key: 'macro',
      label: 'Macro',
      clr: '#8B6B9D'
    },
    {
      key: 'meso',
      label: 'Meso',
      clr: '#DDA44A'
    },
    {
      key: 'micro',
      label: 'Micro',
      clr: '#C4CBD2'
    },
    {
      key: 'media',
      label: 'Media',
      clr: '#8DBBB8'
    }
  ],
  meta_lables: [
    {
      key: 'Topic',
      label: 'Topics'
    },
    {
      key: 'Tags',
      label: 'Tags'
    }
  ],
  date_slices: [
    {
      key: 'month',
      label: 'Month',
      offset: 1
    },
    {
      key: '3month',
      label: '3 Month',
      offset: 3
    },
    {
      key: '6month',
      label: '6 Month',
      offset: 6
    }
  ],

  demo_data: {
    impactdata: 'static/impact_log_01012017-03292017.csv',
    gafiles: [
      'static/ga_data/RevealNews_20170101-20170329_1.csv',
      'static/ga_data/RevealNews_20170101-20170329_2.csv',
      'static/ga_data/RevealNews_20170101-20170329_3.csv',
      'static/ga_data/RevealNews_20170101-20170329_4.csv',
      'static/ga_data/RevealNews_20170101-20170329_5.csv'
    ]
  }
};

export default APP_CONFIG;