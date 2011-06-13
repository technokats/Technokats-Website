<div id="sidebar">

<ul>
	<li id="sb_top">
		<div class="sb_logo">
	    	<a href="<?php bloginfo('url'); ?>" title="<?php bloginfo('name'); ?>">
	        <!-- The logo - Change it to be your own -->
	        <img src="<?php bloginfo('template_url'); ?>/images/logo.jpg" alt="Home" />
	        <!-- ...or you can remove the logo and add the line below -->
	        <!-- <a href="<?php bloginfo('url'); ?>" title="<?php bloginfo('name'); ?>"><?php bloginfo('name'); ?></a>  -->

	        <!-- ... and now the slogan: -->
	        <br />
	        <?php bloginfo('description'); ?>
	        </a>
	    </div>
	</li>

    <!-- Navigation -->
	<li>
	    <ul class="navlist">
	    	<li><a href="<?php bloginfo('url'); ?>" title="">Home</a></li>

	    	<?php wp_list_pages('sort_column=menu_order&title_li='); ?>
	        <!-- More info at http://codex.wordpress.org/Pages -->
	        <!-- ... and you should read the readme.txt file -->
	    </ul>
    </li>

    <!-- Syndication -->
    <li><h2 style="background-position: 0 -1px;">Syndication</h2>
		<ul class="feed">
			<li>
		        <a href="<?php bloginfo('rss2_url'); ?>" title="<?php _e('Syndicate this site using RSS'); ?>">
					<?php _e('Entries <abbr title="Really Simple Syndication">RSS</abbr>'); ?>
				</a>
			</li>
		</ul>
    </li>

<!-- Start Widget-ready -->
<!-- If you use Widgets (control panel - > Presentation - > Widgets), the content below will be replaced by the widgets you add to your sidebar -->
<?php if ( !function_exists('dynamic_sidebar') || !dynamic_sidebar() ) : ?>

    <!-- Author -->
    <li class="widget"><h2><?php _e('Author'); ?></h2>
		<ul>
			<li>
				<!-- Change image location below -->
	            <img src="<?php bloginfo('template_url'); ?>/images/budha.jpg" alt="Photo Example" />
	            A little something about you, the author. Open sidebar.php in your favorite web editor to edit this text and image. Alternatively, you can simply go to <em>Dashboard -> Design -> Widgets</em> and add the '<b>Text</b>' widget to your sidebar to create your own bio. When you add a widget to the sidebar, this section and the ones below will be substituted by your widgets.
			</li>
		</ul>
	</li>

    <!-- Categories -->
	<li class="widget"><h2><?php _e('Categories'); ?></h2>
        <ul>
			<?php wp_list_cats('sort_column=name&optioncount=1&hierarchical=0'); ?>
		</ul>
	</li>

    <!-- Archives -->
	<li class="widget"><h2><?php _e('Archives'); ?></h2>
        <ul>
			<?php wp_get_archives('type=monthly'); ?>
		</ul>
	</li>

<?php endif; //function_exists('dynamic_sidebar') ?>


	<li class="widget"><h2><?php _e('Meta'); ?></h2>
		<ul>
			<?php wp_register(); ?>
			<li><?php wp_loginout(); ?></li>
			<li><a href="http://wordpress.org/" title="Powered by WordPress, state-of-the-art semantic personal publishing platform.">WordPress</a></li>                    

			<?php wp_meta(); ?>
		</ul>
	</li>

    <!-- Copyrights -->
	<li class="copyright">
	<!-- Type your copyright information below -->
	<p>&copy; All your copyright information here. Open template's sidebar.php file to edit this!</p>
	</li>

</ul>


</div> <!-- /sidebar -->

