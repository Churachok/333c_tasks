#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char word[100];
    printf("Введите слово: ");
    scanf("%s", word);
    
    if (isPalindrome(word)) {
        printf("'%s' - палиндром\n", word);
    } else {
        printf("'%s' - не палиндром\n", word);
    }
    return 0;
}