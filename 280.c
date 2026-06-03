#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 8, 16, 31, 64, 128, 255};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Проверка степени двойки:\n");
    for (int i = 0; i < size; i++) {
        printf("%3d: %s\n", numbers[i], isPowerOfTwo(numbers[i]) ? "да" : "нет");
    }
    return 0;
}