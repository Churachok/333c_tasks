#include <stdio.h>


#define FLAG_RUNNING    (1 << 0)  
#define FLAG_LOGGED_IN  (1 << 1)  
#define FLAG_HAS_ACCESS (1 << 2)  
#define FLAG_IS_ADMIN   (1 << 3)  
#define FLAG_DEBUG      (1 << 4)  
#define FLAG_SAVED      (1 << 5)  

int main() {
    int state = 0;
    
    // Установка флагов
    state |= FLAG_RUNNING;
    state |= FLAG_LOGGED_IN;
    state |= FLAG_HAS_ACCESS;
    
    printf("Состояние: 0x%02X\n", state);
    
  
    printf("RUNNING: %s\n", (state & FLAG_RUNNING) ? "да" : "нет");
    printf("LOGGED_IN: %s\n", (state & FLAG_LOGGED_IN) ? "да" : "нет");
    printf("HAS_ACCESS: %s\n", (state & FLAG_HAS_ACCESS) ? "да" : "нет");
    printf("IS_ADMIN: %s\n", (state & FLAG_IS_ADMIN) ? "да" : "нет");
    

    state &= ~FLAG_LOGGED_IN;
    printf("\nПосле сброса LOGGED_IN: 0x%02X\n", state);
    printf("LOGGED_IN: %s\n", (state & FLAG_LOGGED_IN) ? "да" : "нет");
    

    state ^= FLAG_DEBUG;
    printf("\nПосле переключения DEBUG: 0x%02X\n", state);
    state ^= FLAG_DEBUG;
    printf("Ещё раз: 0x%02X\n", state);
    
    return 0;
}