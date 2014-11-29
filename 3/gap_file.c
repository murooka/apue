#include "apue.h"
#include <fcntl.h>
#include <sys/stat.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(int argc, char **argv)
{
    int fd;

    if ( (fd = creat("file.hole", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) < 0 ) {
        fprintf(stderr, "creat error\n");
        exit(EXIT_FAILURE);
    }

    if ( write(fd, buf1, 10) != 10 ) {
        fprintf(stderr, "buf1 write error\n");
        exit(EXIT_FAILURE);
    }

    if ( lseek(fd, 16384, SEEK_SET) == -1 ) {
        fprintf(stderr, "seek error\n");
        exit(EXIT_FAILURE);
    }

    if ( write(fd, buf2, 10) != 10 ) {
        fprintf(stderr, "buf2 write error\n");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
