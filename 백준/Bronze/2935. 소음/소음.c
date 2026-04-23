#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a>b)? a : b;
}

int min(int a, int b) {
    return (a<b)? a : b;
}

int main(void) {
    char A[101], B[101];
    char opr;

    scanf("%s\n%c\n%s", A, &opr, B);

    int m, n;
    m = strlen(A) - 1;
    n = strlen(B) - 1;

    if(opr == '+') {
        if(m == n) {
            putchar('2');
            for(int i = m - 1; i >= 0; i--) {
                putchar('0');
            }
        } else {
            int max_n = max(m, n);
            int min_n = min(m, n);
            for(int i = max_n; i >= 0; i--) {
                if(i == max_n || i == min_n) {
                    putchar('1');
                } else {
                    putchar('0');
                }
            }
        }
    } else {
        putchar('1');
        for(int i = 0; i < m + n; i++) {
            putchar('0');
        }
    }
    
    return 0;
}