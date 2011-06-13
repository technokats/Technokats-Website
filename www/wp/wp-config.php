<?php
/**
 * The base configurations of the WordPress.
 *
 * This file has the following configurations: MySQL settings, Table Prefix,
 * Secret Keys, WordPress Language, and ABSPATH. You can find more information
 * by visiting {@link http://codex.wordpress.org/Editing_wp-config.php Editing
 * wp-config.php} Codex page. You can get the MySQL settings from your web host.
 *
 * This file is used by the wp-config.php creation script during the
 * installation. You don't have to use the web site, you can just copy this file
 * to "wp-config.php" and fill in the values.
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'wordpress');

/** MySQL database username */
define('DB_USER', 'root');

/** MySQL database password */
define('DB_PASSWORD', 'tk45swdev');

/** MySQL hostname */
define('DB_HOST', 'localhost');

/** Database Charset to use in creating database tables. */
define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '%6nUTc6]kwn$-2&f)E1]-&0D`l0y@Gqv8)x-9|:Prq82+:6]L8X@;F-iuU.D9U^V');
define('SECURE_AUTH_KEY',  'w_0^eA,%6R-TlB.7h)}hU9Zp9pKEojZffKHJ`Ns=S[BOZ]Hse(z7B?v7Vr{BI;Bz');
define('LOGGED_IN_KEY',    'yw0/1@VzH)]y#09MD/Gd^)u:SAZ~s+),%W(e5Vf,:-7:`6qH=KKP+-l.Bu< ^I)?');
define('NONCE_KEY',        '9]$Mx;*<UMa=H&aU]?ZVU;cLh9_CIX LMxqK Y94&-FpCLW:CED_@b*KvNSDfJgq');
define('AUTH_SALT',        'dN)tmXJ:3r+q+}g|5C!T5I?T2t#403?+gmJ_}8t5~:5ZEs[4}htTV.`|rZVL!)?5');
define('SECURE_AUTH_SALT', 'J2-g2J0.;<.^$92.+lJ.`v7-qx+cV(nT1wSn5jKOdE?3)/62=_*YjNOCcNGBW(|F');
define('LOGGED_IN_SALT',   '.(b>|)UH)}3h0,>r,.<-%+>km<4K5PV+{QXFBxU<B4J.8TM8Y8[qw2 DQs]]-ok,');
define('NONCE_SALT',       ' C}[._/;x/NJ4$_1}:fB^Q]C8eS.^Vcdqbiue@Yf+Yf9EZ*-P@b?ZWp/tV^:jZ}J');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each a unique
 * prefix. Only numbers, letters, and underscores please!
 */
$table_prefix  = 'wp_';

/**
 * WordPress Localized Language, defaults to English.
 *
 * Change this to localize WordPress. A corresponding MO file for the chosen
 * language must be installed to wp-content/languages. For example, install
 * de_DE.mo to wp-content/languages and set WPLANG to 'de_DE' to enable German
 * language support.
 */
define('WPLANG', '');

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 */
define('WP_DEBUG', false);

/* That's all, stop editing! Happy blogging. */

/** Absolute path to the WordPress directory. */
if ( !defined('ABSPATH') )
	define('ABSPATH', dirname(__FILE__) . '/');

/** Sets up WordPress vars and included files. */
require_once(ABSPATH . 'wp-settings.php');

