/* include/setup.h.  Generated from setup.h.in by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if using alloca.c.  */
/* #undef C_ALLOCA */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
/* #undef CRAY_STACKSEG_END */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
/* #undef HAVE_SYS_WAIT_H */

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define if the `setpgrp' function takes no argument.  */
#define SETPGRP_VOID 1

/* Define if the setvbuf function takes the buffering type as its second
   argument and the buffer pointer as the third, as on System V
   before release 3.  */
/* #undef SETVBUF_REVERSED */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown
 */
/* #undef STACK_DIRECTION */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if your <sys/time.h> declares struct tm.  */
/* #undef TM_IN_SYS_TIME */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define if you do not have the index function.  */
/* #undef NOINDEX */

/* Define if you need the strtok function.  */
/* #undef NEED_STRTOK */

/* Define if you need the strtoken function.  */
#define NEED_STRTOKEN 1

/* Define if you have the times function.  */
/* #undef HAVE_TIMES */

/* Define if you have the <stddef.h> header file.  */
#define STDDEFH 1

/* Define if you have the <stdlib.h> header file.  */
#define STDLIBH 1

/* Define if you have the <string.h> header file.  */
#define STRINGH 1

/* Define if you have the <strings.h> header file.  */
#define STRINGSH 1

/* Define if you have the <sys/param.h> header file.  */
#define PARAMH 1

/* Define if you have the <sys/rusage.h> header file.  */
/* #undef HAVE_SYS_RUSAGE_H */

/* Define if you have the <sys/syslog.h> header file.  */
#define SYSSYSLOGH 1

/* Define if you have the <unistd.h> header file.  */
#define UNISTDH 1

/* Define to <malloc.h> you need malloc.h. */
#define MALLOCH <malloc.h>

/* Define if you have the <sys/rusage.h> header file. */
/* #undef RUSAGEH */

/* Define if you have the <glob.h> header file. */
#define GLOBH 1

/* Define if you have regex */
/* #undef HAVE_REGEX */

/* Define if you don't have bcopy */
/* #undef NEED_BCOPY */

/* Define if you don't have bcmp */
/* #undef NEED_BCMP */

/* Define if you need bzero */
/* #undef NEED_BZERO */

/* Define if you have syslog */
#define HAVE_SYSLOG 1

/* Define if you have vsyslog */
#define HAVE_VSYSLOG 1

/* Define if you want to allow SSL connections */
#define USE_SSL 1

/* Define if you can set the core size to unlimited */
#define FORCE_CORE 1

/* Define if you have strcasecmp */
#define GOT_STRCASECMP 1

/* Define if you need inet_addr */
/* #undef NEED_INET_ADDR */

/* Define if you need inet_ntoa */
/* #undef NEED_INET_NTOA */

/* Define if you need inet_netof */
/* #undef NEED_INET_NETOF */

/* Define if you have gettimeofday */
#define GETTIMEOFDAY 1

/* Define if you have lrand48 */
/* #undef LRAND48 */

/* Define if you have getrusage */
#define GETRUSAGE_2 1

/* Define if you have times */
/* #undef TIMES_2 */

/* Define if you have O_NONBLOCK */
#define NBLOCK_POSIX 1

/* Define if you have O_NDELAY */
/* #undef NBLOCK_BSD */

/* Define if you have FIONBIO */
/* #undef NBLOCK_SYSV */

/* Define if you have POSIX signals */
#define POSIX_SIGNALS 1

/* Define if you have BSD signals */
/* #undef RELIABLE_BSD_SIGNALS */

/* Define if you have SYSV signals */
/* #undef UNRELIABLE_SYSV_SIGNALS */

/* Define these to be unsigned integral internal types,
 * of respecitvely 2 and 4 bytes in size, when not already
 * defined in <sys/types.h>, <stdlib.h> or <stddef.h> */
/* #undef u_int16_t */
/* #undef u_int32_t */

/* Define if you have setproctitle */
/* #undef HAVE_SETPROCTITLE */

/* Define if you have PS_STRINGS */
/* #undef HAVE_PSSTRINGS */

/* Define if you have pstat */
/* #undef HAVE_PSTAT */

/* Define if you have crypt */
#define HAVE_CRYPT 1

/* Local hostname of the server */
#define DOMAINNAME "tktestserv"

/* The default permissions for configuration files */
#define DEFAULT_PERMISSIONS 0600

/* Define if you want spoof protection */
/* #undef NOSPOOF */

/* Define if you want +a/+q prefixes */
#define PREFIX_AQ 1

/* Define if you want to compile as a hub */
#define HUB 1

/* Define the location of the configuration files */
#define DPATH "/var/unrealircd/Unreal3.2"

/* Define the location of the executable */
#define SPATH "/var/unrealircd/Unreal3.2/src/ircd"

/* Set to the listen backlog size you want */
#define LISTEN_SIZE 5

/* Set to the max sendq you want */
#define MAXSENDQLENGTH 3000000

/* Set to the nickname history length you want */
#define NICKNAMEHISTORYLENGTH 2000

/* Set to the bufferpool size you want */
#define BUFFERPOOL (18 * MAXSENDQLENGTH)

/* Set to the max connections you want */
#define MAXCONNECTIONS 1024

/* Define if you want IPv6 enabled */
/* #undef INET6 */

/* Define if you want modes shown in /list */
#define LIST_SHOW_MODES 1

/* Define if you want nick!user@host shown for the topic setter */
/* #undef TOPIC_NICK_IS_NUHOST */

/* Define if you want users to be notified when their shun is removed */
/* #undef SHUN_NOTICES */

/* Define if you want OperOverride disabled */
/* #undef NO_OPEROVERRIDE */

/* Define if you want opers to have to use /invite to join +s/+p channels */
/* #undef OPEROVERRIDE_VERIFY */

/* Define if you want to disable /set* and /chg* */
/* #undef DISABLE_USERMOD */

/* Define if your system prepends an underscore to symbols */
/* #undef UNDERSCORE */

/* Define if rlim_t is long long */
/* #undef LONG_LONG_RLIM_T */

/* Define if you have snprintf */
#define HAVE_SNPRINTF 1

/* Define if you have vsnprintf */
#define HAVE_VSNPRINTF 1

/* Define if you have strlcpy */
/* #undef HAVE_STRLCPY */

/* Define if you have strlcat */
/* #undef HAVE_STRLCAT */

/* Define if you have strlncat */
/* #undef HAVE_STRLNCAT */

/* Define if you have inet_pton */
#define HAVE_INET_PTON 1

/* Define if you have inet_ntop */
#define HAVE_INET_NTOP 1

/* Define if you have a compiler with C99 variable length array support */
#define HAVE_C99_VARLEN_ARRAY 1

/* Define if you have alloca.h */
#define HAVE_ALLOCA_H 1

/* Define if you have alloca */
#define HAVE_ALLOCA 1

/* Define to 1 if your system has no in6addr_any. */
/* #undef NO_IN6ADDR_ANY */
