use 5.018;
use utf8;
use strict;
use warnings;

my $prog_tmpl = <<EOL;
#include "apue.h"
#include <errno.h>
#include <limits.h>

static void print_sysconf(const char *, int);
static void print_pathconf(const char *, const char *, int);

int main(int argc, char **argv)
{
    if ( argc != 2 ) {
        fprintf(stderr, "usage: %s <dirname>\\n", argv[0]);
        exit(EXIT_FAILURE);
    }

<:sysconf:>

<:pathconf:>

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
                printf("not supported\\n");
            }
            else {
                fprintf(stderr, "sysconf error\\n");
                exit(EXIT_FAILURE);
            }
        }
        else {
            printf("no limit\\n");
        }
    }
    else {
        printf("%ld\\n", val);
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
                printf("not supported\\n");
            }
            else {
                fprintf(stderr, "sysconf error\\n");
                exit(EXIT_FAILURE);
            }
        }
        else {
            printf("no limit\\n");
        }
    }
    else {
        printf("%ld\\n", val);
    }

}
EOL

sub sysconf {
    my $tmpl = <<EOL;
#ifdef {}
    printf("{} defined to be %ld\\n", (long){});
#else
    printf("no symbol for {}\\n");
#endif
#ifdef _SC_{}
    print_sysconf("{}", _SC_{});
#else
    printf("no symbol for _SC_{}\\n");
#endif
EOL
    $tmpl =~ s!{}!$_[0]!g;
    $tmpl;
}

sub pathconf {
    my $tmpl = <<EOL;
#ifdef _PC_{}
    print_pathconf("{}", argv[1], _PC_{});
#else
    printf("no symbol for _PC_{}\\n");
#endif
EOL
    $tmpl =~ s!{}!$_[0]!g;
    $tmpl;
}

my $sys_symbols = join "\n", map { sysconf($_) } qw/
    ARG_MAX
    ATEXIT_MAX
    CHILD_MAX
    CLK_TCK
    COLL_WEIGHTS_MAX
    DELAYTIMER_MAX
    HOST_NAME_MAX
    IOV_MAX
    LINE_MAX
    LOGIN_NAME_MAX
    NGROUPS_MAX
    OPEN_MAX
    PAGESIZE
    PAGE_SIZE
    RE_DUP_MAX
    RTSIG_MAX
    SEM_NSEMS_MAX
    SEM_VALUE_MAX
    SIGQUEUE_MAX
    STREAM_MAX
    SYMLOOP_MAX
    TIMER_MAX
    TTY_NAME_MAX
    TZNAME_MAX
/;

my $path_symbols = join "\n", map { pathconf($_) } qw/
    MAX_CANON
    FILESIZEBITS
    LINE_MAX
    MAX_INPUT
    NAME_MAX
    PATH_MAX
    PIPE_BUF
    TIMESTAMP_RESOLUTION
    SYMLINK_MAX
/;


my $prog = $prog_tmpl;
$prog =~ s/<:sysconf:>/$sys_symbols/;
$prog =~ s/<:pathconf:>/$path_symbols/;
print $prog;
