(function($) {

  var monthDictionary = [
    'January',
    'February',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'October',
    'November',
    'December'
  ];

  $(function () {

    // show/hide impact log filters
    $('.impact-filters-toggle').click(function (e) {
      e.preventDefault();
      $('.impact-filters').toggle();
    });

    $('.impact-filters-last-7').click(function (e) {
      e.preventDefault();
      var today = new Date();
      var then = new Date(today.getTime() - 7 * 24 * 60 * 60 * 1000);
      $('#edit-field-date-value-max-wrapper input').val(formatDate(today));
      $('#edit-field-date-value-min-wrapper input').val(formatDate(then));
    });

    $('.impact-filters-last-30').click(function (e) {
      e.preventDefault();
      var today = new Date();
      var then = new Date(today.getTime() - 30 * 24 * 60 * 60 * 1000);
      $('#edit-field-date-value-max-wrapper input').val(formatDate(today));
      $('#edit-field-date-value-min-wrapper input').val(formatDate(then));
    });

    $('.impact-filters-last-365').click(function (e) {
      e.preventDefault();
      var today = new Date();
      var then = new Date(today.getTime() - 365 * 24 * 60 * 60 * 1000);
      $('#edit-field-date-value-max-wrapper input').val(formatDate(today));
      $('#edit-field-date-value-min-wrapper input').val(formatDate(then));
    });

    // =========
    // timeline!
    // =========

    $('.render-timeline').click(function (e) {
      e.preventDefault();
      var query = location.search;
      var $timeline = $('#timeline');
      $timeline.show();
      $('.render-timeline').hide();
      $('.hide-timeline').show();


      $.get('/activity-log/timeline.json' + query, function (data) {
        var activities = (typeof data === 'object') ? data.activities : [];
        $.get('/log/timeline.json' +  query, function (data) {
          if (typeof data !== 'object') {
            $timeline.removeClass('loading');
            $('.timeline-error').show();
            return;
          }
          if (data.outcomes.length === 0) {
            $timeline.removeClass('loading');
            $('.timeline-no-results').show();
            return;
          }

          var outcomes = data.outcomes;
          var dates = {};
          var topics = {};
          var nextTopicID = 0;
          var maxTopicIDs = 10;

          for (var i = 0; i < outcomes.length; i++) {
            var outcome = outcomes[i].outcome;
            var date = new Date(outcome.date).getTime().toString();
            if (dates.hasOwnProperty(date)) {
              if (dates[date].hasOwnProperty('outcomes')) {
                dates[date].outcomes.push(outcome);
              } else {
                dates[date].outcomes = [outcome];
              }
            } else {
              dates[date] = {}
              dates[date].outcomes = [outcome];
            }
            if (outcome.topic && !topics.hasOwnProperty(outcome.topic)) {
              topics[outcome.topic] = nextTopicID;
              $('#timeline-topics-key-container').append('<li><span class="icon-circle topic-'+nextTopicID+'"></span> '+outcome.topic+'</li>');
              nextTopicID = (nextTopicID + 1) % maxTopicIDs;
            }
          }

          for (var i = 0; i < activities.length; i++) {
            var activity = activities[i].activity;
            var date = new Date(activity.date).getTime().toString();
            if (dates.hasOwnProperty(date)) {
              if (dates[date].hasOwnProperty('activities')) {
                dates[date].activities.push(activity);
              } else {
                dates[date].activities = [activity];
              }
            } else {
              dates[date] = {}
              dates[date].activities = [activity];
            }
          }

          console.log(dates);

          var startDate = new Date(outcomes[outcomes.length - 1].outcome.date);
          var endDate = new Date(outcomes[0].outcome.date);
          startDate.setDate(1);

          for (var d = startDate; d <= endDate; d.setDate(d.getDate() + 1)) {
            var date = dates[d.getTime()];
            var classes = 'day';
            var html = '';
            if (d.getDate() == 1) {
              classes += ' monthStart';
              html += '<div class="monthLabel">' + monthDictionary[d.getMonth()] + ' ' + d.getFullYear() + '</div>';
            }
            html += '<div class="dateLabel">' + d.getDate() + '</div>';
            html += '<div class="activities">';
            if (date && date.activities) {
              for (var i = 0; i < date.activities.length; i++) {
                var activity = date.activities[i];
                html += '<a href="' + activity.path + '"" title="' + activity.title.replace(/['"]+/g, '') + '" class="activity icon-tce" target="_blank"></a>';
              }
            }
            html += '</div>'; // close activities div
            if (date && date.outcomes) {
              for (var i = 0; i < date.outcomes.length; i++) {
                var outcome = date.outcomes[i];
                var type = 'icon-other';
                if (outcome.media) type = 'icon-media';
                if (outcome.micro) type = 'icon-micro';
                if (outcome.meso) type = 'icon-meso';
                if (outcome.macro) type = 'icon-macro';
                html += '<a class="node ' + type + ' topic-' + topics[outcome.topic] + '" title="' + outcome.desc.replace(/['"]+/g, '') + '" href="' + outcome.path + '" target="_blank">';
                html += '</a>'
                //html += '<p>x</p>';
              };
            }
            $('#timeline-chart').append('<div class="' + classes + '">' + html + '</div>');
          }

          $timeline.removeClass('loading');
          $('#timeline-key').show();
          if (outcomes.length === 1000) {
            $('.timeline-limit-warning').show();
          }

          // fix heights
          var activityHeight = 0;
          $('#timeline .activities').each(function () {
            var thisHeight = $(this).outerHeight();
            if (thisHeight > activityHeight) {
              activityHeight = thisHeight;
            }
          });
          $('#timeline .activities').height(activityHeight);
          var dayHeight = 0;
          $('#timeline .day').each(function () {
            var thisHeight = $(this).height();
            if (thisHeight > dayHeight) {
              dayHeight = thisHeight;
            }
          });
          $('#timeline .day').height(dayHeight);
        });
      });
    });

    $('.hide-timeline').click(function (e) {
      e.preventDefault();
      $('.show-timeline').show();
      $('.hide-timeline').hide();
      $('#timeline').hide();
    });

    $('.show-timeline').click(function (e) {
      e.preventDefault();
      $('.show-timeline').hide();
      $('.hide-timeline').show();
      $('#timeline').show();
    });

  });

  function formatDate(date) {
    return (date.getMonth() + 1) + '/' + date.getDate() + '/' + date.getFullYear();
  }


  // ======================================================
  // select all button on Review Submissions page (/review)
  // ======================================================

  $(function () {
    $('#review-submissions-select-all').click(function (e) {
      e.preventDefault();
      $('.field-name-field-reviewed input').attr('checked', true);
    });
  });


  // =========================================
  // hide medium field if there are no options
  // =========================================

  $(function () {
    $('.node-outcome-form .field-name-field-mediums').each(function () {
      var $this = $(this);
      if ($this.find('input[type="checkbox"]').length === 0) {
        $this.remove();
      }
    })
  });


  // ======================================================
  // use Chosen plugin to improve UI of multi-select fields
  // ======================================================

  $(function () {
    $('select#edit-field-subtopics-und,select#edit-field-topics-und,select#edit-field-grant-und').chosen();
  })

})(jQuery);

