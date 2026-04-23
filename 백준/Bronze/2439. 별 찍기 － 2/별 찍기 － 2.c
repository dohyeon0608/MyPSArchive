#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n; j++) {
            if(j < i-1) 
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}