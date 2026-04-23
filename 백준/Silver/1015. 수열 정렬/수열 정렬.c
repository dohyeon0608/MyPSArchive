#include <stdio.h>

struct pair
{
    short a;
    short b;
};

void swap(short* a, short* b) {
    short temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    short A[50];
    short P[50];
    struct pair swaps[2500];
    short swap_count = 0;

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", A+i);
        P[i] = i;
    }

    // Bubble Sort
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-1-i; j++) {
            if(A[j] > A[j+1]) {
                swap(A+j, A+j+1);
                swaps[swap_count].a = j;
                swaps[swap_count].b = j+1;
                swap_count++;
            }
        }
    }

    while(--swap_count >= 0) {
        struct pair p = swaps[swap_count];
        swap(P+p.a, P+p.b);
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", P[i]);
    }
    return 0;
}