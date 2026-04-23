#include <stdio.h>

int fact(int n) {
    switch (n)
    {
        case 1:
        return 1;
        case 2:
        return 2;
        case 3:
        return 6;
        case 4:
        return 4;
        default:
        return 0;
    }
}

int main(void) {
    int T;
    scanf("%d", &T);

    int n;
    for(int i = 0; i < T; i++) {
        scanf("%d", &n);
        printf("%d\n", fact(n));
    }

    return 0;
}