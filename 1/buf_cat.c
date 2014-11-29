#include <stdio.h>

int main(int argc, char **argv) {
    int c;

    while ( (c = getc(stdin)) != EOF ) {
        if ( putc(c, stdout) == EOF ) {
            fprintf(stderr, "output error\n");
        }
    }

    if ( ferror(stdin) ) {
        fprintf(stderr, "input error\n");
    }

    return 0;
}
