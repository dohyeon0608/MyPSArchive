#include <stdio.h>

int main(void) {
    int n, result, theta;

    scanf("%d", &n);
    result = 180 * (n - 1);

    for(int i = 0; i < n; i++){
        scanf("%d", &theta);
        result -= (theta << 1);
    }

    printf("%d", result);

    return 0;
}