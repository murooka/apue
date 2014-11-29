#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    DIR *dp;
    struct dirent *dirp;

    if ( argc != 2 ) {
        printf("usage: ls dir_name\n");
        exit(EXIT_FAILURE);
    }

    if ( (dp = opendir(argv[1])) == NULL ) {
        printf("can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ( (dirp = readdir(dp)) != NULL ) {
        printf("%s\n", dirp->d_name);
    }

    return 0;
}

