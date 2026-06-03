#include <stdio.h>

#define offsetof(TYPE, MEMBER) ((size_t)&((TYPE *)0)->MEMBER)
#define CONTAINER_OF(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

typedef struct {
    int id;
    char name[50];
    float score;
} Student;

int main() {
    Student s = {100, "Иван", 4.5};
    float *scorePtr = &s.score;
    
    Student *sPtr = CONTAINER_OF(scorePtr, Student, score);
    
    printf("Через указатель на поле score:\n");
    printf("id = %d, name = %s, score = %.1f\n", 
           sPtr->id, sPtr->name, sPtr->score);
    return 0;
}