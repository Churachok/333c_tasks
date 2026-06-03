# Проект из 4 файлов: main.c, utils.c, math.c, helpers.c
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = app

OBJS = main.o utils.o math.o helpers.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o: main.c utils.h math.h helpers.h
utils.o: utils.c utils.h
math.o: math.c math.h
helpers.o: helpers.c helpers.h

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)