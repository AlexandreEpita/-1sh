#include <err.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

void xwrite(char* el){
    ssize_t output = write(1, el, 1);
    if (output == -1)
        errx(1, "Error when trying to write in the buffer");
}

void newline(){
    char nl = '\n';
    xwrite(&nl);
}

void space(){
    char sp = ' ';
    xwrite(&sp);
}

void echo(int argc, char** argv){
    for (; *argv != '\0'; argv++){
        for (; **argv != '\0'; (*argv)++)
            xwrite(*argv);
        space();
    }
    newline();
}