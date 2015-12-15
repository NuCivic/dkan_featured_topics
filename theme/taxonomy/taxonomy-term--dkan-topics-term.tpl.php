<?php
/**
 * @file
 * Custom group node template.
 */
?>
  <article id="taxonomy-term-<?php print $term->tid;; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php print render($content['field_image']); ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
    <?php
      hide($content['field_image']);
      print render($content);
    ?>
  </article>

