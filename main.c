#include <err.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv ){
    if(argc < 2)
    {
        errx(1,"error");
    }
    if(!argv[1])
    {
        return 1;
    }
    return 0;
}
