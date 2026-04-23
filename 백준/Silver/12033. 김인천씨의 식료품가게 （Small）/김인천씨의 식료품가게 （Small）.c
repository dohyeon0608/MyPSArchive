#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int find(int *arr, bool *visited, int N, int value) {
    for(int i = 0; i < N; i++) {
        if(arr[i] == value && !visited[i]) return i;
    }
    return -1;
}

int main(void) {
    int T;
    scanf("%d", &T);

    bool *visited;
    int *P;

    for(int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        visited = (bool*) calloc(2*N, sizeof(bool));
        P = (int*) calloc(2*N, sizeof(int));

        for(int i = 0; i < 2*N; i++) {
            scanf("%d", &P[i]);
        }

        printf("Case #%d: ", t);

        for(int i = 0; i < 2*N; i++) {
            if(!visited[i]) {
                int index = find(P, visited, 2*N, P[i] / 3 * 4); // 또 타입이...
                if(index != -1) visited[index] = true;
                visited[i] = true;
                printf("%d ", P[i]);
            }
        }

        printf("\n");

        free(visited);
        free(P);
    }

    return 0;
}