#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    long long result = 0;

    int k = 1, pow10k = 10;

    for(; pow10k <= n; pow10k *= 10, k++) {
        result += (long long) k * (pow10k - pow10k / 10);
    }

    result += (long long) k * (n - pow10k / 10 + 1);

    printf("%d", result);

    return 0;
}