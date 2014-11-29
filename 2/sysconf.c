#include "apue.h"
#include <errno.h>
#include <limits.h>

static void print_sysconf(const char *, int);
static void print_pathconf(const char *, const char *, int);

int main(int argc, char **argv)
{
    if ( argc != 2 ) {
        fprintf(stderr, "usage: %s <dirname>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

#ifdef ARG_MAX
    printf("ARG_MAX defined to be %ld\n", (long)ARG_MAX);
#else
    printf("no symbol for ARG_MAX\n");
#endif
#ifdef _SC_ARG_MAX
    print_sysconf("ARG_MAX", _SC_ARG_MAX);
#else
    printf("no symbol for _SC_ARG_MAX\n");
#endif

#ifdef ATEXIT_MAX
    printf("ATEXIT_MAX defined to be %ld\n", (long)ATEXIT_MAX);
#else
    printf("no symbol for ATEXIT_MAX\n");
#endif
#ifdef _SC_ATEXIT_MAX
    print_sysconf("ATEXIT_MAX", _SC_ATEXIT_MAX);
#else
    printf("no symbol for _SC_ATEXIT_MAX\n");
#endif

#ifdef CHILD_MAX
    printf("CHILD_MAX defined to be %ld\n", (long)CHILD_MAX);
#else
    printf("no symbol for CHILD_MAX\n");
#endif
#ifdef _SC_CHILD_MAX
    print_sysconf("CHILD_MAX", _SC_CHILD_MAX);
#else
    printf("no symbol for _SC_CHILD_MAX\n");
#endif

#ifdef CLK_TCK
    printf("CLK_TCK defined to be %ld\n", (long)CLK_TCK);
#else
    printf("no symbol for CLK_TCK\n");
#endif
#ifdef _SC_CLK_TCK
    print_sysconf("CLK_TCK", _SC_CLK_TCK);
#else
    printf("no symbol for _SC_CLK_TCK\n");
#endif

#ifdef COLL_WEIGHTS_MAX
    printf("COLL_WEIGHTS_MAX defined to be %ld\n", (long)COLL_WEIGHTS_MAX);
#else
    printf("no symbol for COLL_WEIGHTS_MAX\n");
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
    print_sysconf("COLL_WEIGHTS_MAX", _SC_COLL_WEIGHTS_MAX);
#else
    printf("no symbol for _SC_COLL_WEIGHTS_MAX\n");
#endif

#ifdef DELAYTIMER_MAX
    printf("DELAYTIMER_MAX defined to be %ld\n", (long)DELAYTIMER_MAX);
#else
    printf("no symbol for DELAYTIMER_MAX\n");
#endif
#ifdef _SC_DELAYTIMER_MAX
    print_sysconf("DELAYTIMER_MAX", _SC_DELAYTIMER_MAX);
#else
    printf("no symbol for _SC_DELAYTIMER_MAX\n");
#endif

#ifdef HOST_NAME_MAX
    printf("HOST_NAME_MAX defined to be %ld\n", (long)HOST_NAME_MAX);
#else
    printf("no symbol for HOST_NAME_MAX\n");
#endif
#ifdef _SC_HOST_NAME_MAX
    print_sysconf("HOST_NAME_MAX", _SC_HOST_NAME_MAX);
#else
    printf("no symbol for _SC_HOST_NAME_MAX\n");
#endif

#ifdef IOV_MAX
    printf("IOV_MAX defined to be %ld\n", (long)IOV_MAX);
#else
    printf("no symbol for IOV_MAX\n");
#endif
#ifdef _SC_IOV_MAX
    print_sysconf("IOV_MAX", _SC_IOV_MAX);
#else
    printf("no symbol for _SC_IOV_MAX\n");
#endif

#ifdef LINE_MAX
    printf("LINE_MAX defined to be %ld\n", (long)LINE_MAX);
#else
    printf("no symbol for LINE_MAX\n");
#endif
#ifdef _SC_LINE_MAX
    print_sysconf("LINE_MAX", _SC_LINE_MAX);
#else
    printf("no symbol for _SC_LINE_MAX\n");
#endif

#ifdef LOGIN_NAME_MAX
    printf("LOGIN_NAME_MAX defined to be %ld\n", (long)LOGIN_NAME_MAX);
#else
    printf("no symbol for LOGIN_NAME_MAX\n");
#endif
#ifdef _SC_LOGIN_NAME_MAX
    print_sysconf("LOGIN_NAME_MAX", _SC_LOGIN_NAME_MAX);
#else
    printf("no symbol for _SC_LOGIN_NAME_MAX\n");
#endif

#ifdef NGROUPS_MAX
    printf("NGROUPS_MAX defined to be %ld\n", (long)NGROUPS_MAX);
#else
    printf("no symbol for NGROUPS_MAX\n");
#endif
#ifdef _SC_NGROUPS_MAX
    print_sysconf("NGROUPS_MAX", _SC_NGROUPS_MAX);
#else
    printf("no symbol for _SC_NGROUPS_MAX\n");
#endif

#ifdef OPEN_MAX
    printf("OPEN_MAX defined to be %ld\n", (long)OPEN_MAX);
#else
    printf("no symbol for OPEN_MAX\n");
#endif
#ifdef _SC_OPEN_MAX
    print_sysconf("OPEN_MAX", _SC_OPEN_MAX);
#else
    printf("no symbol for _SC_OPEN_MAX\n");
#endif

#ifdef PAGESIZE
    printf("PAGESIZE defined to be %ld\n", (long)PAGESIZE);
#else
    printf("no symbol for PAGESIZE\n");
#endif
#ifdef _SC_PAGESIZE
    print_sysconf("PAGESIZE", _SC_PAGESIZE);
#else
    printf("no symbol for _SC_PAGESIZE\n");
#endif

#ifdef PAGE_SIZE
    printf("PAGE_SIZE defined to be %ld\n", (long)PAGE_SIZE);
#else
    printf("no symbol for PAGE_SIZE\n");
#endif
#ifdef _SC_PAGE_SIZE
    print_sysconf("PAGE_SIZE", _SC_PAGE_SIZE);
#else
    printf("no symbol for _SC_PAGE_SIZE\n");
#endif

#ifdef RE_DUP_MAX
    printf("RE_DUP_MAX defined to be %ld\n", (long)RE_DUP_MAX);
#else
    printf("no symbol for RE_DUP_MAX\n");
#endif
#ifdef _SC_RE_DUP_MAX
    print_sysconf("RE_DUP_MAX", _SC_RE_DUP_MAX);
#else
    printf("no symbol for _SC_RE_DUP_MAX\n");
#endif

#ifdef RTSIG_MAX
    printf("RTSIG_MAX defined to be %ld\n", (long)RTSIG_MAX);
#else
    printf("no symbol for RTSIG_MAX\n");
#endif
#ifdef _SC_RTSIG_MAX
    print_sysconf("RTSIG_MAX", _SC_RTSIG_MAX);
#else
    printf("no symbol for _SC_RTSIG_MAX\n");
#endif

#ifdef SEM_NSEMS_MAX
    printf("SEM_NSEMS_MAX defined to be %ld\n", (long)SEM_NSEMS_MAX);
#else
    printf("no symbol for SEM_NSEMS_MAX\n");
#endif
#ifdef _SC_SEM_NSEMS_MAX
    print_sysconf("SEM_NSEMS_MAX", _SC_SEM_NSEMS_MAX);
#else
    printf("no symbol for _SC_SEM_NSEMS_MAX\n");
#endif

#ifdef SEM_VALUE_MAX
    printf("SEM_VALUE_MAX defined to be %ld\n", (long)SEM_VALUE_MAX);
#else
    printf("no symbol for SEM_VALUE_MAX\n");
#endif
#ifdef _SC_SEM_VALUE_MAX
    print_sysconf("SEM_VALUE_MAX", _SC_SEM_VALUE_MAX);
#else
    printf("no symbol for _SC_SEM_VALUE_MAX\n");
#endif

#ifdef SIGQUEUE_MAX
    printf("SIGQUEUE_MAX defined to be %ld\n", (long)SIGQUEUE_MAX);
#else
    printf("no symbol for SIGQUEUE_MAX\n");
#endif
#ifdef _SC_SIGQUEUE_MAX
    print_sysconf("SIGQUEUE_MAX", _SC_SIGQUEUE_MAX);
#else
    printf("no symbol for _SC_SIGQUEUE_MAX\n");
#endif

#ifdef STREAM_MAX
    printf("STREAM_MAX defined to be %ld\n", (long)STREAM_MAX);
#else
    printf("no symbol for STREAM_MAX\n");
#endif
#ifdef _SC_STREAM_MAX
    print_sysconf("STREAM_MAX", _SC_STREAM_MAX);
#else
    printf("no symbol for _SC_STREAM_MAX\n");
#endif

#ifdef SYMLOOP_MAX
    printf("SYMLOOP_MAX defined to be %ld\n", (long)SYMLOOP_MAX);
#else
    printf("no symbol for SYMLOOP_MAX\n");
#endif
#ifdef _SC_SYMLOOP_MAX
    print_sysconf("SYMLOOP_MAX", _SC_SYMLOOP_MAX);
#else
    printf("no symbol for _SC_SYMLOOP_MAX\n");
#endif

#ifdef TIMER_MAX
    printf("TIMER_MAX defined to be %ld\n", (long)TIMER_MAX);
#else
    printf("no symbol for TIMER_MAX\n");
#endif
#ifdef _SC_TIMER_MAX
    print_sysconf("TIMER_MAX", _SC_TIMER_MAX);
#else
    printf("no symbol for _SC_TIMER_MAX\n");
#endif

#ifdef TTY_NAME_MAX
    printf("TTY_NAME_MAX defined to be %ld\n", (long)TTY_NAME_MAX);
#else
    printf("no symbol for TTY_NAME_MAX\n");
#endif
#ifdef _SC_TTY_NAME_MAX
    print_sysconf("TTY_NAME_MAX", _SC_TTY_NAME_MAX);
#else
    printf("no symbol for _SC_TTY_NAME_MAX\n");
#endif

#ifdef TZNAME_MAX
    printf("TZNAME_MAX defined to be %ld\n", (long)TZNAME_MAX);
#else
    printf("no symbol for TZNAME_MAX\n");
#endif
#ifdef _SC_TZNAME_MAX
    print_sysconf("TZNAME_MAX", _SC_TZNAME_MAX);
#else
    printf("no symbol for _SC_TZNAME_MAX\n");
#endif


#ifdef _PC_MAX_CANON
    print_pathconf("MAX_CANON", argv[1], _PC_MAX_CANON);
#else
    printf("no symbol for _PC_MAX_CANON\n");
#endif

#ifdef _PC_FILESIZEBITS
    print_pathconf("FILESIZEBITS", argv[1], _PC_FILESIZEBITS);
#else
    printf("no symbol for _PC_FILESIZEBITS\n");
#endif

#ifdef _PC_LINE_MAX
    print_pathconf("LINE_MAX", argv[1], _PC_LINE_MAX);
#else
    printf("no symbol for _PC_LINE_MAX\n");
#endif

#ifdef _PC_MAX_INPUT
    print_pathconf("MAX_INPUT", argv[1], _PC_MAX_INPUT);
#else
    printf("no symbol for _PC_MAX_INPUT\n");
#endif

#ifdef _PC_NAME_MAX
    print_pathconf("NAME_MAX", argv[1], _PC_NAME_MAX);
#else
    printf("no symbol for _PC_NAME_MAX\n");
#endif

#ifdef _PC_PATH_MAX
    print_pathconf("PATH_MAX", argv[1], _PC_PATH_MAX);
#else
    printf("no symbol for _PC_PATH_MAX\n");
#endif

#ifdef _PC_PIPE_BUF
    print_pathconf("PIPE_BUF", argv[1], _PC_PIPE_BUF);
#else
    printf("no symbol for _PC_PIPE_BUF\n");
#endif

#ifdef _PC_TIMESTAMP_RESOLUTION
    print_pathconf("TIMESTAMP_RESOLUTION", argv[1], _PC_TIMESTAMP_RESOLUTION);
#else
    printf("no symbol for _PC_TIMESTAMP_RESOLUTION\n");
#endif

#ifdef _PC_SYMLINK_MAX
    print_pathconf("SYMLINK_MAX", argv[1], _PC_SYMLINK_MAX);
#else
    printf("no symbol for _PC_SYMLINK_MAX\n");
#endif


    return EXIT_SUCCESS;
}

void print_sysconf(const char *msg, int name)
{
    long val;

    printf("%s: ", msg);

    errno = 0;
    if ( (val = sysconf(name)) < 0 ) {
        if ( errno != 0 ) {
            if ( errno == EINVAL ) {
                printf("not supported\n");
            }
            else {
                fprintf(stderr, "sysconf error\n");
                exit(EXIT_FAILURE);
            }
        }
        else {
            printf("no limit\n");
        }
    }
    else {
        printf("%ld\n", val);
    }

}

void print_pathconf(const char *msg, const char *path, int name)
{
    long val;

    printf("%s: ", msg);

    errno = 0;
    if ( (val = pathconf(path, name)) < 0 ) {
        if ( errno != 0 ) {
            if ( errno == EINVAL ) {
                printf("not supported\n");
            }
            else {
                fprintf(stderr, "sysconf error\n");
                exit(EXIT_FAILURE);
            }
        }
        else {
            printf("no limit\n");
        }
    }
    else {
        printf("%ld\n", val);
    }

}
