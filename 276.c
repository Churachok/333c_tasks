#include <stdio.h>

int createMask(int start, int end) {
    return ((1 << (end - start + 1)) - 1) << start;
}

int applyMask(int num, int mask) {
    return num & mask;
}

int main() {
    int num = 0b10111010;  
    int start = 2, end = 5;
    
    int mask = createMask(start, end);
    int result = applyMask(num, mask);
    
    printf("Число:        %08X (", num);
    for (int i = 7; i >= 0; i--) printf("%d", (num >> i) & 1);
    
    printf(")\nМаска (биты %d-%d): %08X (", start, end, mask);
    for (int i = 7; i >= 0; i--) printf("%d", (mask >> i) & 1);
    
    printf(")\nРезультат:    %08X (", result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");
    
    return 0;
}