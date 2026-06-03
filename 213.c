#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    *ptr = 42;  // Segmentation fault здесь!
    return 0;
}

// В GDB:
// (gdb) run
// Программа упадёт с SIGSEGV
// (gdb) backtrace
// (gdb) frame 0
// (gdb) print ptr