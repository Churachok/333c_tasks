# Создание статической библиотеки

# Компилируем объектные файлы
gcc -c utils.c -o utils.o
gcc -c math.c -o math.o

# Создаём статическую библиотеку
ar rcs libmylib.a utils.o math.o

# Использование библиотеки
gcc main.c -L. -lmylib -o program

# Просмотр содержимого библиотеки
ar t libmylib.a