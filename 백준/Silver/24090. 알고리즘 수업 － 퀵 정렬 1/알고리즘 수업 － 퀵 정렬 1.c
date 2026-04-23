#include <stdio.h>
#include <stdlib.h>

int K;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    if(--K == 0) {
        if(*a < *b)
            printf("%d %d", *a, *b);
        else
            printf("%d %d", *b, *a);
        exit(EXIT_SUCCESS);
    }
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for(int j = p; j <= r-1; j++){
        if(A[j] <= x) swap(&A[++i], &A[j]);
    }
    if(i + 1 != r) swap(&A[i+1], &A[r]);
    return i+1;
}

void quick_sort(int A[], int p, int r) {
    if(p < r) {
        int q = partition(A, p, r);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }
}

int main(void) {
    int N;
    scanf("%d %d", &N, &K);

    int A[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", A+i);
    }

    quick_sort(A, 0, N-1);

    if(N > 0)
        printf("-1");

    return 0;
}