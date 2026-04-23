#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    double result = (double)(a * c) / b;
    printf("%lf", result);

    return 0;
}