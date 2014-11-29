#include "apue.h"
#include <string.h>

static void sig_int(int);

int main(int argc, char **argv)
{
    char buf[MAX_LINE];
    pid_t pid;
    int status;

    if ( signal(SIGINT, sig_int) == SIG_ERR ) {
        fprintf(stderr, "signal error\n");
    }

    printf("%% ");
    while ( fgets(buf, MAX_LINE, stdin) != NULL ) {
        if ( buf[strlen(buf) - 1] == '\n' ) {
            buf[strlen(buf) - 1] = 0;
        }

        if ( (pid = fork()) < 0 ) {
            fprintf(stderr, "fork error\n");
            exit(EXIT_FAILURE);
        }

        if ( pid == 0 ) {
            execlp(buf, buf, (char *)0);
            fprintf(stderr, "can not execute: %s\n", buf);
            exit(EXIT_FAILURE);
        }

        if ( (pid = waitpid(pid, &status, 0)) < 0 ) {
            fprintf(stderr, "waitpid error\n");
        }

        printf("%% ");
    }

    return EXIT_SUCCESS;
}

void sig_int(int signal) {
    printf("interrupt\n%% ");
    fflush(stdout);
}
