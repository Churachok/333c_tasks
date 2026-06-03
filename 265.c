#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Record;

void addRecord(const char *filename, Record newRecord) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return;
    }
    
    fwrite(&newRecord, sizeof(Record), 1, file);
    fclose(file);
    printf("Запись добавлена\n");
}

void readAllRecords(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Файл пуст\n");
        return;
    }
    
    Record r;
    while (fread(&r, sizeof(Record), 1, file) == 1) {
        printf("ID: %d, Имя: %s\n", r.id, r.name);
    }
    fclose(file);
}

int main() {
    Record r1 = {1, "Иван"};
    Record r2 = {2, "Мария"};
    Record r3 = {3, "Петр"};
    
    addRecord("records.dat", r1);
    addRecord("records.dat", r2);
    addRecord("records.dat", r3);
    
    printf("\nВсе записи:\n");
    readAllRecords("records.dat");
    return 0;
}