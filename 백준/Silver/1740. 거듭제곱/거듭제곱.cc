#include <stdio.h>
#define ll unsigned long long

ll pow3Memo[50] = {1,};

ll pow3(int r) {
    if(pow3Memo[r] != 0) return pow3Memo[r];
    if(r == 0) return 1;
    else {
        ll res = pow3(r / 2);
        res *= res;
        if(r % 2 == 1) res *= 3;
        pow3Memo[r] = res;
        return res;
    }
}

ll solve(ll N) {
    ll result = 0;
    int r = 0;
    while(N > 0) {
        if(N % 2 == 1) result += pow3(r);
        N >>= 1;
        r++;
    }
    return result;
}

int main(void) {
    ll N;
    scanf("%llu", &N);

    printf("%llu", solve(N));
    
    return 0;
}