#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool isPalindrome = true;
    
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Массив является палиндромом\n");
    } else {
        printf("Массив не является палиндромом\n");
    }
    return 0;
}