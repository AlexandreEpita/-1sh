#include <err.h>
#include <errno.h>

void xwrite(char* el){
    ssize_t output = write(1, el, 1);
    if (output == -1)
        errx(1, "Error when trying to write in the buffer");
}

void newline(){
    char nl = '\n';
    xwrite(&nl);
}

void echo(int argc, char* argv[]){
    for (int i = 0; i < argc; i++)
        for (; argv[i-argc] != '\0';)
            xwrite(argv[i-argc]);
    newline();
}