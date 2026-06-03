#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int count;
} Frequency;

int mostFrequent(int arr[], int size) {
    Frequency *freq = (Frequency*)malloc(size * sizeof(Frequency));
    int uniqueCount = 0;
    
    for (int i = 0; i < size; i++) {
        int found = -1;
        for (int j = 0; j < uniqueCount; j++) {
            if (freq[j].value == arr[i]) {
                found = j;
                break;
            }
        }
        if (found != -1) {
            freq[found].count++;
        } else {
            freq[uniqueCount].value = arr[i];
            freq[uniqueCount].count = 1;
            uniqueCount++;
        }
    }
    
    int maxFreq = 0, maxValue = freq[0].value;
    for (int i = 0; i < uniqueCount; i++) {
        if (freq[i].count > maxFreq) {
            maxFreq = freq[i].count;
            maxValue = freq[i].value;
        }
    }
    
    free(freq);
    return maxValue;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2, 3, 3, 3, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = mostFrequent(arr, size);
    printf("Наиболее часто встречающийся элемент: %d\n", result);
    return 0;
}