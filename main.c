#include <err.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_LINE_LENGTH 80

void head(char *filename)
{
    FILE *file = fopen(filename,"r");
    int i = 0;
    char line[MAX_LINE_LENGTH] = {0};

    if (file == NULL)
        errx(1,"EXIT_FAILURE");
    while (fgets(line, MAX_LINE_LENGTH, file) && i < 10)
    {
        printf("%s",line);
        i = i + 1;
    }
    printf("%s",line);
    fclose(file);
}

int main(int argc, char **argv ){
    if(argc < 2)
    {
        errx(1,"error");
    }
    char command[15];
    strcpy(command, argv[1]);
    if(command == "head")
    {
        head(argv[2]);
    }
    return 0;
}
