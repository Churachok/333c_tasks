# Makefile с автоматическими зависимостями
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program
SRCS = main.c utils.c math.c helpers.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean