#include <stdio.h>

int main(void) {
    int max = 0;
    int maxIndex = 0;
    int n;

    for(int i = 0; i < 9; i++) {
        scanf("%d", &n);
        if(n > max) {
            max = n;
            maxIndex = i + 1;
        }
    }

    printf("%d\n%d\n", max, maxIndex);

    return 0;
}