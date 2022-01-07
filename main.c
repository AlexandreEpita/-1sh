#include <err.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 256

int my_strcmp(char* str1, char* str2){
    for (;*str1 != '\0' && *str2 != '\0'; str1++ , str2++)
        if (*str1 != *str2)
            return 0;
    return (*str1 == '\0' && *str2 == '\0');
}

void xwrite(char *str, int size){
    ssize_t output = write(1, str, size);
    if (output == -1)
        errx(1, "error in buffer");
}

void xread(char *buff, int size){
    ssize_t output = read(0, buff, size);
    if (output == -1)
        errx(1, "error in buffer");
}

int main(void){//int argc, char **argv ){
    char *buff = calloc(BUFF_SIZE, sizeof(char));
    *buff = '\0';
    while (my_strcmp(buff, "quit\n") == 0){
        xwrite("> ", 2);
        xread(buff, BUFF_SIZE);
        xwrite("", 1);
    }
    return 0;
}
