#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(Date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1) {
        return false;
    }
    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(d.year)) {
        daysInMonth[1] = 29;
    }
    
    return d.day <= daysInMonth[d.month - 1];
}

int main() {
    Date dates[] = {{31, 12, 2023}, {29, 2, 2024}, {31, 4, 2023}, {0, 5, 2023}};
    
    for (int i = 0; i < 4; i++) {
        printf("%02d.%02d.%d - %s\n", 
               dates[i].day, dates[i].month, dates[i].year,
               isValidDate(dates[i]) ? "Корректна" : "Некорректна");
    }
    return 0;
}