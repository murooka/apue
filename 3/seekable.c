#include "apue.h"

int main(int argc, char **argv)
{
    if ( lseek(STDIN_FILENO, 0, SEEK_CUR) == -1 ) {
        printf("can not seek\n");
    }
    else {
        printf("seek ok\n");
    }
    
    return EXIT_SUCCESS;
}
