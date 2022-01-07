CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c99 -Isrc/ -O2 -DNDBUG

EXEC = main
SRC = main.c src/cat.c src/echo.c tools/parser.c src/head.c
OBJ = ${SRC:.c=.o}

${EXEC}: ${OBJ}

	${CC} -o $@ $^

clean:
	rm -f ${OBJ} ${OBJ_TEST} ${EXEC} ${EXEC_TEST}
