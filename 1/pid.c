#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("hello world from process ID %ld\n", (long)getpid());
    return 0;
}
