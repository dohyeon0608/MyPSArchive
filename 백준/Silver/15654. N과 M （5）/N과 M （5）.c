#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 8

typedef struct {
    int values[MAX_SIZE];
    int size;
} Stack;

void push_stack(Stack *S, int v) {
    S->values[S->size++] = v;
}

void pop_stack(Stack *S) {
    if(S->size > 0) S->size--;
}

int compare_ints(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int linear_search(int* arr, int N, int v) {
    for(int i = 0; i < N; i++) {
        if(arr[i] == v) return true;
    }
    return false;
}

void solve(Stack *S, int* arr, int N, int M) {
    if(S->size == M) {
        for(int i = 0; i < M; i++) {
            printf("%d ", S->values[i]);
        }
        printf("\n");
    } else {
        for(int k = 0; k < N; k++) {
            if(linear_search(S->values, S->size, arr[k])) continue;
            push_stack(S, arr[k]);
            solve(S, arr, N, M);
            pop_stack(S);
        }
    }
}

int main(void) {
    Stack S = {{0}, 0};
    int arr[MAX_SIZE];

    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare_ints);

    solve(&S, arr, N, M);

    return 0;
}