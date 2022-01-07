#include <err.h>
#include <errno.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    if(argc < 2)
    {
        errx(1,"error");
    }
    printf("%s\n",argv[1]); // pour eviter le unused argv
    return 0;
}
