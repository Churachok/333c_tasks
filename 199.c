#include <stdio.h>

#define LOG_LEVEL 2

#define LOG(level, msg) do { \
    if (level <= LOG_LEVEL) { \
        printf("[%s] %s\n", \
               level == 1 ? "ERROR" : \
               level == 2 ? "WARN" : \
               level == 3 ? "INFO" : "DEBUG", \
               msg); \
    } \
} while(0)

int main() {
    LOG(1, "Критическая ошибка");
    LOG(2, "Предупреждение");
    LOG(3, "Информационное сообщение");
    LOG(4, "Отладочное сообщение");
    return 0;
}