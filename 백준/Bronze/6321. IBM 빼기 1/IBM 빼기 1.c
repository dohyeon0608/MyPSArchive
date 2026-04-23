#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    
    char ch;
    
    for(int i = 0; i < n; i++) {
        printf("String #%d\n", i+1);
        while((ch = getchar()) != '\n') {
            putchar((ch - 'A' + 1) % 26 + 'A');
        }
        if(i < n - 1) printf("\n\n");
    }
    return 0;
}