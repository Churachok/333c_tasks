#include <stdio.h>
#include <time.h>

#define LOG_LEVEL_ERROR 1
#define LOG_LEVEL_WARN  2
#define LOG_LEVEL_INFO  3
#define LOG_LEVEL_DEBUG 4

#define CURRENT_LOG_LEVEL LOG_LEVEL_DEBUG

#define LOG(level, fmt, ...) do { \
    if (level <= CURRENT_LOG_LEVEL) { \
        time_t now = time(NULL); \
        char *time_str = ctime(&now); \
        time_str[strlen(time_str)-1] = '\0'; \
        printf("[%s] ", time_str); \
        switch(level) { \
            case LOG_LEVEL_ERROR: printf("[ERROR] "); break; \
            case LOG_LEVEL_WARN:  printf("[WARN]  "); break; \
            case LOG_LEVEL_INFO:  printf("[INFO]  "); break; \
            case LOG_LEVEL_DEBUG: printf("[DEBUG] "); break; \
        } \
        printf(fmt "\n", ##__VA_ARGS__); \
    } \
} while(0)

int main() {
    LOG(LOG_LEVEL_ERROR, "Ошибка подключения к базе данных");
    LOG(LOG_LEVEL_WARN, "Низкий заряд батареи: %d%%", 15);
    LOG(LOG_LEVEL_INFO, "Пользователь %s вошёл в систему", "admin");
    LOG(LOG_LEVEL_DEBUG, "Переменная x = %d, y = %.2f", 42, 3.14);
    return 0;
}