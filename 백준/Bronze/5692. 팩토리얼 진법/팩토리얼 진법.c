#include <stdio.h>

int main(void) {
    int is[] = {120, 24, 6, 2, 1};
    int index, result, a;

    while(1) {
        index = 4;
        result = 0;

        scanf("%d", &a);
        if(a == 0) break;

        while(a >= 1) {
            result += a % 10 * is[index];
            index--; a /= 10;
        }

        printf("%d\n", result);
    }

    return 0;
}