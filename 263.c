#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[20];
} Contact;

void saveContacts(Contact contacts[], int count) {
    FILE *file = fopen("contacts.dat", "wb");
    fwrite(&count, sizeof(int), 1, file);
    fwrite(contacts, sizeof(Contact), count, file);
    fclose(file);
}

int loadContacts(Contact contacts[]) {
    FILE *file = fopen("contacts.dat", "rb");
    if (file == NULL) return 0;
    
    int count;
    fread(&count, sizeof(int), 1, file);
    fread(contacts, sizeof(Contact), count, file);
    fclose(file);
    return count;
}

int main() {
    Contact contacts[100];
    int count = loadContacts(contacts);
    int choice;
    
    while (1) {
        printf("\n=== КОНТАКТЫ ===\n");
        printf("1 - Показать все\n");
        printf("2 - Добавить контакт\n");
        printf("3 - Выйти\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        getchar();
        
        if (choice == 1) {
            printf("\nСписок контактов:\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
            }
        } else if (choice == 2) {
            printf("Имя: ");
            fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
            contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';
            
            printf("Телефон: ");
            fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
            contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';
            
            count++;
            saveContacts(contacts, count);
            printf("Контакт добавлен!\n");
        } else if (choice == 3) {
            break;
        }
    }
    return 0;
}