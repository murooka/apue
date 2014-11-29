#include <unistd.h>
#include <stdio.h>

#define BUFSIZE 4096

int main(int argc, char **argv) {

    int n;
    char buf[BUFSIZE];

    while ( (n = read(STDIN_FILENO, buf, BUFSIZE)) > 0 ) {
        if ( write(STDOUT_FILENO, buf, n) != n ) {
            fprintf(stderr, "write error\n");
        }
    }

    if ( n < 0 ) {
        fprintf(stderr, "read error\n");
    }

    return 0;
}
