#include <stdio.h>

int main(void) {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    int r = A % B;
    for(int i = 0; i < N; i++) {
        r *= 10;
        if(i == N-1) printf("%d", r / B);
        r %= B;
    }

    return 0;
}