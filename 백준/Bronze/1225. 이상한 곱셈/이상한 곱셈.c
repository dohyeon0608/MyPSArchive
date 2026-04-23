#include <stdio.h>

int main(void) {
    char ch;
    int A = 0, B = 0;

    while((ch = getchar()) != ' ') {
        A += ch - '0';
    }

    while((ch = getchar()) != '\n') {
        B += ch - '0';
    }

    long long result = (long long) A * B;

    printf("%lld", result);

    return 0;
}