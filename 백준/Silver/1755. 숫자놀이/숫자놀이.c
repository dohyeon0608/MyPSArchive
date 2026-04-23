#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 20

typedef struct {
    int number;
    char name[MAX_SIZE];
} NumberName;

void bubble_sort(NumberName* arr, int n) {
    NumberName temp;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(arr[i].name, arr[j].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    char *num_names[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    NumberName* number_names;
    NumberName number_name;

    int M, N;
    scanf("%d %d", &M, &N);

    int size = N-M+1;

    number_names = (NumberName*) calloc(size, sizeof(NumberName));

    for(int k = M; k <= N; k++) {
        number_name = (NumberName) { k, "" };

        if(k / 10 != 0) {
            strcat(number_name.name, num_names[k / 10]);
            strcat(number_name.name, " ");
        }

        strcat(number_name.name, num_names[k % 10]);

        number_names[k-M] = number_name;
    }

    bubble_sort(number_names, size);

    for(int i = 0; i < size; i++) {
        printf("%d ", number_names[i].number);
        if(i % 10 == 9) printf("\n");
    }

    return 0;
}