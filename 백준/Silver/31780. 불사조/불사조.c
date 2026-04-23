#include <stdio.h>

int main(void) {
    int X, M;
    scanf("%d %d", &X, &M);

    long long result = (long long)X * (M + 1);
    printf("%lld", result);
    
    return 0;
}