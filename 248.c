# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

program: main.o utils.o
	$(CC) main.o utils.o -o program

main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f *.o program

run: program
	./program