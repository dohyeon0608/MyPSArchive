#include <stdio.h>
#include <math.h>

char isPrime(int n) {
    char result = 1;
    if(n > 1) {
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                result = 0;
                break;
            }
        }
    } else result = 0;
    return result;
}

int main(void) {
    int N;
    scanf("%d", &N);
    int result = 0;
    for(int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        if(isPrime(x)) result++;
    }
    printf("%d\n", result);
    return 0;
}