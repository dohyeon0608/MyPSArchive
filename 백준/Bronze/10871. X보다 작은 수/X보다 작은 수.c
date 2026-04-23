#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int a;
    
    while(n > 0) {
        scanf("%d", &a);
        if(a < x)
            printf("%d ", a);
        n--;
    }
    
    return 0;
}