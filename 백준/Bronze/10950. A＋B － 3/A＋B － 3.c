#include <stdio.h>

int main(void) {
    int loop;
    scanf("%d", &loop);
    
    while(loop > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        loop--;
    }
    
    return 0;
}