#include <stdio.h>

int main(void) {
    // 필요 변수 선언
    int queue[200000];
    int start = 0;
    int end = 0;
    int temp = 0;

    // 입력부
    int N;
    scanf("%d", &N);

    int A[100000];
    int B[100000];

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if(A[i] == 0) start++;
    }

    temp = start;

    for(int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
        if(A[i] == 0) {
            queue[--temp] = B[i];
        }
    }

    // 입력 처리
    int M;
    scanf("%d", &M);

    int C;
    for(int i = 0; i < M; i++) {
        scanf("%d", &C);
        queue[start++] = C;
        printf("%d ", queue[end++]);
    }

    return 0;
}