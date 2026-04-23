#include <stdio.h>
#define ll long long

int main(void) {
    int T;
    scanf("%d", &T);

    int N;
    int n3, n7, n21;
    ll result;

    while(T-- > 0) {
        scanf("%d", &N);

        n3 = N / 3;
        n7 = N / 7;
        n21 = N / 21;

        result =( (ll)3 * n3 * (n3 + 1) + (ll)7 * n7 * (n7 + 1) - (ll)21 * n21 * (n21 + 1)) / 2;

        printf("%lld\n", result);
    }
    
    return 0;
}