#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int comparePersons(Person p1, Person p2) {
    int nameComp = strcmp(p1.name, p2.name);
    if (nameComp != 0) return nameComp;
    return p1.age - p2.age;
}

int main() {
    Person p1 = {"Алексей", 25};
    Person p2 = {"Алексей", 30};
    Person p3 = {"Борис", 25};
    
    printf("p1 vs p2: %d\n", comparePersons(p1, p2));
    printf("p1 vs p3: %d\n", comparePersons(p1, p3));
    return 0;
}