#include <stdio.h>

int fact(int x) {
    int result = 1;
    for(int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int nCk = fact(N) / (fact(K) * fact(N-K));

    printf("%d\n", nCk);

    return 0;
}