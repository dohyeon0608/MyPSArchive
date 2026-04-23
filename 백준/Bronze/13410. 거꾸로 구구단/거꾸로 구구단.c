#include <stdio.h>
#include <math.h>

int get_reversed(int n) {
    int result = 0;
    int digit = (int) log10(n);

    while(n > 0) {
        result += pow(10, digit) * (n % 10);
        n /= 10;
        digit--;
    }

    return result;
}

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);

    int result = 0;
    int v;

    for(int k = 1; k <= K; k++) {
        v = get_reversed(N * k);
        if(v > result) result = v;
    }

    printf("%d", result);
    return 0;
}