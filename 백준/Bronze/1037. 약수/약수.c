#include <stdio.h>

int main(void) {
    int number_N = 0;

    // Get the number of yaksu
    scanf("%d", &number_N);
    int numbers[number_N];

    // Input numbers
    for(int i = 0; i < number_N; i++) {
        scanf("%d", &numbers[i]);
    }

    // Bubble Sort
    for(int i = 0; i < number_N; i++) {
        int min_value = numbers[i];
        int min_index = i;
        for(int j = i; j < number_N-1; j++) {
            if(min_value > numbers[j+1]){
                min_value = numbers[j+1];
                min_index = j+1;
            }
        }
        numbers[min_index] = numbers[i];
        numbers[i] = min_value;
    }

    // Get and print N
    if(number_N % 2 == 0) {
        printf("%d", numbers[number_N/2-1] * numbers[number_N/2]);
    } else {
        printf("%d", numbers[number_N/2] * numbers[number_N/2]);
    }
    
    return 0;
}