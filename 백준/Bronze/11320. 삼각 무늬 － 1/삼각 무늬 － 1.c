#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    int A, B;
    while(T-- > 0) {
        scanf("%d %d", &A, &B);
        printf("%d\n", (A/B)*(A/B));
    }
    
    return 0;
}