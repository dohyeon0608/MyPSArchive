#include <stdio.h>

int main() {
    while(1) {
        int x;
        scanf("%d", &x);
        if(x == 0) break;

        int digit[5] = {0};
        int digits = 0;
        char result = 1;

        while(x > 0) {
            digit[digits++] = x % 10;
            x /= 10;
        }

        for(int i = 0; i < (digits/2) + 1; i++) {
            if(digit[i] != digit[(digits-1)-i]) {
                result = 0;
                break;
            }
        }
        
        printf((result)? "yes" : "no");
        printf("\n");
    }

    return 0;
}