#include <stdio.h>

int log10(int n) {
    if(n < 10) return 0;
    return log10(n / 10) + 1;
}

int find_digit(int n, int offset) {
    if(offset == 0) return n % 10;
    else return find_digit(n / 10, offset + 1);
}

int main(void) {
    int N;
    scanf("%d", &N);

    // 읽은 전체 숫자
    int n = 0;

    while(N > 0) {
        n++;
        N -= log10(n) + 1;
    }

    int result = find_digit(n, N);

    printf("%d", result);

    return 0;
}