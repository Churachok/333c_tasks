# Команды для компиляции многофайлового проекта:

# Компиляция объектных файлов
gcc -c main.c -o main.o
gcc -c utils.c -o utils.o

# Линковка
gcc main.o utils.o -o program

# Запуск
./program

# Одной командой
gcc main.c utils.c -o program