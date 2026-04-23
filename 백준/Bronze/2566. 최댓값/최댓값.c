#include <stdio.h>

int main() {
    int n = 0; // temporary
    
    char max = -1;
    char x = 0;
    char y = 0;
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d", &n);
            if(n > max) {
                max = n;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    
    printf("%d\n%d %d", max, x, y);

    return 0;
}