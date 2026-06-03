#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int min;
    int max;
    double average;
} ArrayStats;

ArrayStats* analyzeArray(int arr[], int size) {
    ArrayStats *stats = (ArrayStats*)malloc(sizeof(ArrayStats));
    
    stats->min = INT_MAX;
    stats->max = INT_MIN;
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < stats->min) stats->min = arr[i];
        if (arr[i] > stats->max) stats->max = arr[i];
        sum += arr[i];
    }
    
    stats->average = (double)sum / size;
    return stats;
}

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 56, 78, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    ArrayStats *stats = analyzeArray(arr, size);
    
    printf("Анализ массива:\n");
    printf("Минимум: %d\n", stats->min);
    printf("Максимум: %d\n", stats->max);
    printf("Среднее: %.2f\n", stats->average);
    
    free(stats);
    return 0;
}