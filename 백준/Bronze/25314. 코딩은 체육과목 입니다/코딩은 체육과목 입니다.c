#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N > 0) {
        printf("long ");
        N -= 4;
    }
    
    printf("int");
    return 0;
}


