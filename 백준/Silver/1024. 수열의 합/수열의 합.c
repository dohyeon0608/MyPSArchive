#include <stdio.h>

int main() {
    int N, L;
    scanf("%d %d", &N, &L);

    // N / k = 1/2 * n(단, n은 자연수)
    char isExist = 1;
    int start, end;
    for(int k = L; k <= 100; k++) {
        int r = N - (N / k) * k;
        if(N % k == 0) { // n이 짝수 (L은 홀수)
            if(k % 2 == 0) continue;
            start = N/k - k/2;
            end = N/k + k/2;
        } else if(r * 2 == k) { // n이 홀수 (L은 짝수)
            if(k % 2 == 1) continue;
            start = N/k - k/2 + 1;
            end = N/k + k/2;
        } else {
            continue;
        }
        if(start < 0) continue;
        if(start == end) continue;
        isExist = 0;
        break;
    }

    if(isExist) {
        printf("-1\n");
    } else {
        for(int l = start; l <= end; l++) {
            printf("%d ", l);
        }
        printf("\n");
    }

    return 0;
}