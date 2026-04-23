#include <stdio.h>
#define ll long long

int main(void) {

    int N, An, result;
    ll sum = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &An);
        sum += (ll) An;
    }

    ll sumN = (ll)(N-1) * N / 2;
    result = sum - sumN;

    printf("%lld", result);

    return 0;
}