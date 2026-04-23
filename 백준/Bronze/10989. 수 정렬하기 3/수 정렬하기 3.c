#include <stdio.h>

int main() {
    int x;
    int N;
    
    int A[10001] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        A[x] = A[x] + 1; 
    }

    for(int i = 0; i < 10001; i++) {
        int n = A[i];
        for(int j = 0; j < n; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}