#include <stdio.h>

int main(void) {
    long long N, R;
    scanf("%lld %lld", &N, &R);

    // 기존 풀이 : N개 뽑고, R개를 뽑으면 짝이 완성된다고 보아 N+R개 (반례: R개가 다 서로 다른 종류라는 것이 보장 X)
    // 일단 종류별로 총 N개를 뽑고, R-1개의 짝이 있도록 2(R-1)개를 더 뽑는다. 여기서 하나만 더 뽑으면 나머지 N개 중 하나와 반드시 짝을 맺으므로 R개의 짝이 된다.
    long long result = N + 2 * R - 1;

    printf("%lld", result);

    return 0;
}