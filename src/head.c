#include <err.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

void head1(char *filename)
{
    FILE *file = fopen(filename,"r");
    int i = 0;
    char line[MAX_LINE_LENGTH] = {0};

    if (file == NULL)
        exit(EXIT_FAILURE);
    while (fgets(line, MAX_LINE_LENGTH, file) && i < 10)
    {
        printf("%s",line);
        i = i + 1;
    }
    fclose(file);
}
