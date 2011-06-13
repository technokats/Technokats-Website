/* Version information for Services.
 *
 * (C) 2003-2011 Anope Team
 * Contact us at team@anope.org
 *
 * Please read COPYING and CREDITS for further details.
 *
 * Based on the original code of Epona by Lara.
 * Based on the original code of Services by Andy Church. 
 * 
 * This file is auto-generated by version.sh
 *
 */

 #ifndef VERSION_H
 #define VERSION_H
 
#define VERSION_MAJOR	1
#define VERSION_MINOR	8
#define VERSION_PATCH	6
#define VERSION_EXTRA	""
#define VERSION_BUILD	3072

#define BUILD	"1"
#define VERSION_STRING "1.8.6 (3072)"
#define VERSION_STRING_DOTTED "1.8.6.3072"

#ifdef DEBUG_COMMANDS
# define VER_DEBUG "D"
#else
# define VER_DEBUG
#endif

#if defined(_WIN32)
# if _MSC_VER >= 1400
#  define VER_OS "W"
# else
#  define VER_OS "w"
# endif
#else
# define VER_OS
#endif

#if defined(USE_MYSQL)
# define VER_MYSQL "Q"
#else
# define VER_MYSQL
#endif

#if defined(USE_MODULES)
# define VER_MODULE "M"
#else
# define VER_MODULE
#endif

#endif
