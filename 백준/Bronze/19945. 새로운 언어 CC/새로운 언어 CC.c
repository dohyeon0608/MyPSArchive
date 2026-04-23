#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    if(n < 0) printf("32");
    else if (n == 0) printf("1");
    else {
        int result = 0;
        for(; n != 0; n >>= 1, result++);
        printf("%d", result);
    }
    
    return 0;
}