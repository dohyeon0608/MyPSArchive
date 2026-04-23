#include <stdio.h>
#include <stdbool.h>
#define A_MIN 1
#define B_MAX 1000

int main(void) {
    bool S[1001] = {false};
    int L, x, n;
    int a_min = A_MIN, b_max = B_MAX;

    scanf("%d", &L);

    for(int i = 0; i < L; i++) {
        scanf("%d", &x);
        S[x] = true;
    }

    scanf("%d", &n);

    if(S[n]) {
        printf("0\n");
        return 0;
    }

    for(int i = 1; i <= 1000; i++) {
        if(S[i]) {
            if(n < i) {
                b_max = i - 1;
                break;
            } else 
                a_min = i + 1;
        }
    }

    int length = b_max - a_min + 1;
    int result = (n - a_min) * (b_max - n + 1) + (b_max - n); // 수학적 접근
    printf("%d", result);

    return 0;
}