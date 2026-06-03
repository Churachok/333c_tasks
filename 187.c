#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    double price;
    int quantity;
} Product;

int main() {
    int n = 3;
    Product *products = malloc(n * sizeof(Product));
    
    if (products == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    strcpy(products[0].name, "Ноутбук");
    products[0].price = 50000;
    products[0].quantity = 5;
    
    strcpy(products[1].name, "Мышь");
    products[1].price = 800;
    products[1].quantity = 20;
    
    strcpy(products[2].name, "Клавиатура");
    products[2].price = 2000;
    products[2].quantity = 10;
    
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f руб., %d шт.\n", 
               products[i].name, products[i].price, products[i].quantity);
    }
    
    free(products);
    return 0;
}