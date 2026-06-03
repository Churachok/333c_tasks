#include <stdio.h>
#include <stdbool.h>

bool isNumberPalindrome(int num) {
    if (num < 0) return false;
    
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int numbers[] = {121, 12321, 12345, 1, 0, -121, 123321};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < size; i++) {
        printf("%d: %s\n", numbers[i], 
               isNumberPalindrome(numbers[i]) ? "палиндром" : "не палиндром");
    }
    return 0;
}