#include <stdio.h>

int main(void) {
    int T, k, result;
    scanf("%d", &T);

    while(T-- > 0) {
        scanf("%d", &k);
        result = k * 23;

        printf("%d\n", result);
    }

    return 0;
}