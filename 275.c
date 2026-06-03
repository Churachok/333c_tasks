#include <stdio.h>

struct Flags {
    unsigned int isRunning : 1;   
    unsigned int isLoggedIn : 1;  
    unsigned int hasAccess : 1;   
    unsigned int isAdmin : 1;     
    unsigned int reserved : 4;    
};

int main() {
    struct Flags flags = {0};
    
    flags.isRunning = 1;
    flags.isLoggedIn = 1;
    flags.hasAccess = 1;
    flags.isAdmin = 0;
    
    printf("Размер структуры: %zu байт\n", sizeof(flags));
    printf("Флаги: isRunning=%d, isLoggedIn=%d, hasAccess=%d, isAdmin=%d\n",
           flags.isRunning, flags.isLoggedIn, flags.hasAccess, flags.isAdmin);

    unsigned int flagBits = 0;
    flagBits |= (1 << 0);  
    flagBits |= (1 << 1);  
    flagBits |= (1 << 2);  
    
    printf("Битовое представление: 0x%02X\n", flagBits);
    
    return 0;
}