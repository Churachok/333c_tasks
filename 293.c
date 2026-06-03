// Файл: file1.c
#include <stdio.h>

int global = 100;          
static int fileStatic = 50; 

void printGlobal() {
    printf("global = %d\n", global);
}

static void helper() {
    printf("static helper (только в этом файле)\n");
}

// Файл: file2.c
extern int global;  
// static int fileStatic;

int main() {
    printf("global из file1: %d\n", global);
    // helper();
    return 0;
}