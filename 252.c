CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program
SRCS = main.c utils.c
OBJS = $(SRCS:.c=.o)

build: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: build
	./$(TARGET)

test: build
	./$(TARGET) --test
	@echo "Тесты пройдены"

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: build run test clean