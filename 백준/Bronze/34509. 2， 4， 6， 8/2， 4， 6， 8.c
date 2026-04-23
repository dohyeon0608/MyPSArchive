#include <stdio.h>

int main(void) {
    for(int N = 10; N <= 99; N++) {
        if(N / 10 == 8 || N % 10 == 8) continue;
        if((N%10 * 10 + N/10) % 4 == 0
    && (N%10 + N/10) % 6 == 0
    ) {
            printf("%d", N);
            break;
        }
    }
}