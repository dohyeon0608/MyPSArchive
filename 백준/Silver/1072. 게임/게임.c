#include <stdio.h>
#define ll long long

ll ceilDivision(ll a, ll b) {
    return (a + b - 1) / b;
}


int main(void) {
    ll X, Y;
    scanf("%lld %lld", &X, &Y);

    int Z = Y * 100 / X;

    if(Z >= 99) {
        printf("-1");
        return 0;
    }

    ll result = ceilDivision(100 * (X - Y), 99 - Z) - X;
    printf("%lld", result);

    return 0;
}