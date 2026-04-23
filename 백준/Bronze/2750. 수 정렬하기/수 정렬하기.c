#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[1000];

    for(int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble Sort
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}