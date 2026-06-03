#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Буферизированный вывод (stdio):\n");
    printf("Это сообщение может не появиться сразу\n");
    fflush(stdout);  
    
    printf("\nНебуферизированный вывод (write):\n");
    write(1, "Немедленный вывод\n", 18); 
    
    printf("\nРазличия:\n");
    printf("Буферизированный: эффективнее, но с задержкой\n");
    printf("Небуферизированный: медленнее, но немедленный\n");
    return 0;
}