<?php
/**
 * @file
 * Basic template file
 */
?>
<?php if (isset($exposed_filters)): ?>
  <div class="exposed_filter_data"><strong>Filters Applied: </strong>

  <?php $filters_applied = array(); ?>

  <?php foreach ($exposed_filters as $filter => $value): ?>
    <?php

      if ($value) {

        // searching title (description)
        if ($filter == 'title') {
          array_push($filters_applied, '"'.$value.'"');
        }

        // filtering by a term
        $term = taxonomy_term_load($value);
        if ($term) {
          array_push($filters_applied, $term->name);
        }

      }

    ?>
  <?php endforeach; ?>

  <?php print(implode(', ', $filters_applied)); ?>

  </div>

<?php endif; ?>
