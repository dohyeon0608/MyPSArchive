#include <stdio.h>

int main() {
    int N;
    int fac2 = 0;
    int fac5 = 0;

    scanf("%d", &N);

    for(int k = 2; k <= N; k++) {
        int n = k;
        char ongoing = 1;
        while(ongoing) {
            if(n % 2 == 0) {
                fac2++;
                n /= 2;
            } else if(n % 5 == 0) {
                fac5++;
                n /= 5;
            } else {
                ongoing = 0;
            }
        }
    }

    int result = (fac2 > fac5)? fac5 : fac2;
    printf("%d\n", result);

    return 0;
}