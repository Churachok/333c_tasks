#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int sum = x + y;
    
    printf("Sum = %d\n", sum);
    return 0;
}

// В GDB:
// (gdb) break main
// (gdb) run
// (gdb) print x
// (gdb) print &x
// (gdb) watch x
// (gdb) display x