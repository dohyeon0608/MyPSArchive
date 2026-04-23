#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int max = -1000000;
    int min = 1000000;

    for(int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);

        max = (number > max)? number : max;
        min = (number < min)? number : min;
    }

    printf("%d %d\n", min, max);

    return 0;
}