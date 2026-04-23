#include <stdio.h>

int fact(int n) {
    if(n <= 1) return 1;
    else return n * fact(n-1);
}

int nCr(int n, int r) {
    return fact(n) / ( fact(n-r) * fact(r) );
}

int main(void) {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int S = nCr(N, M);
    int P = 0;
    for(int k = K; k <= M; k++)
        P += nCr(N-M, M-k) * nCr(M, k);

    double result = (double)P / S;

    printf("%.16f", result);

    return 0;
}