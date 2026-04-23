#include <stdio.h>
#include <string.h>
#define M 1000000007
#define ll long long

// 1000000007은 소수 → 페르마의 소정리 이용해 모듈러 역원 구할 수 있음

ll multiply(ll a, ll b) {
    return ((a%M) * (b%M)) % M;
}

ll pow(ll a, ll r) {
    if(r == 0) return 1;
    else {
        ll half = pow(a, r/2);
        ll result = multiply(half, half);
        if(r % 2 == 1) result = multiply(result, a);
        return result;
    }
}

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);

    ll a = 1;
    ll b = 1;

    for(int i = 0; i < K; i++) {
        a = multiply(N - i, a);
        b = multiply(K - i, b);
    }

    ll result = multiply(a, pow(b, M-2));

    printf("%d", result);
    
    return 0;
}