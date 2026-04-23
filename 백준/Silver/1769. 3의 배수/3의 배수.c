#include <stdio.h>

int main(void) {
    char X[1000000] = {0};
    scanf("%s", X);
    int S;
    int n = 0;

    while(1) {
        S = 0;
        char isOneDigit = 1;
        // str to int
        for(int i = 0; X[i] != 0; i++) {
            S += X[i] - 48;
            if(i > 0) isOneDigit = 0;
        }
        n += !isOneDigit;
        if(S < 10) {
            break;
        }
        // int to str
        for(int i = 0; 1; i++) {
            X[i] = (S % 10) + 48;
            S /= 10;
            if(S == 0) {
                X[i+1] = 0;
                break;
            }
        }
    }

    printf("%d\n", n);
    printf((S % 3 == 0)? "YES\n" : "NO\n");

    return 0;
}