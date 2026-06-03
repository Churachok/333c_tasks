# Создание динамической библиотеки (Linux)

# Компиляция с PIC (Position Independent Code)
gcc -c -fPIC utils.c -o utils.o
gcc -c -fPIC math.c -o math.o

# Создание динамической библиотеки
gcc -shared -o libmylib.so utils.o math.o

# Использование
gcc main.c -L. -lmylib -o program

# Запуск с указанием пути к библиотеке
LD_LIBRARY_PATH=. ./program

# Просмотр зависимостей
ldd program