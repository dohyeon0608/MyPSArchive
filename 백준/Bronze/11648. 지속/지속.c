#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int result = 0;
    int temp = 1;

    while(n >= 10) {
        temp = 1;
        while(n > 0) {
            temp *= n % 10;
            n /= 10;
        }
        n = temp;
        result++;
    }

    printf("%d", result);

    return 0;
}