#include <stdio.h>

void multiplyByTwo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("До: ");
    for (int i = 0; i < size; i++) printf("%d ", numbers[i]);
    
    multiplyByTwo(numbers, size);
    
    printf("\nПосле: ");
    for (int i = 0; i < size; i++) printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}