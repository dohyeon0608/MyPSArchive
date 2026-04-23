#include <stdio.h>

int main(void) {
    int loop;
    scanf("%d", &loop);
    int max = loop;
    
    while(loop > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", max-loop+1, a+b);
        loop--;
    }
    
    return 0;
}