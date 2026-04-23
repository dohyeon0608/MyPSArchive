#include <stdio.h>

int main(void) {
    int N, F;
    scanf("%d %d", &N, &F);
    int result;

    int cand = ((N - (N % 100)) / F) * F;

    while(1) {
        if(cand / 100 == N / 100) {
            result = cand;
            break;
        }
        cand += F;
    }
    printf("%d%d\n", (result / 10) % 10, result % 10);
    
    return 0;
}