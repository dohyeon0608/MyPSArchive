#include <stdio.h>

void print_Jbox(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i == 0) || (i == n-1) || (j == 0) || (j == n-1))
                printf("#");
            else
                printf("J");
        }
        printf("\n");
    }
}

int main(void) {
    int T;
    scanf("%d", &T);

    int J;

    while(T-- > 0) {
        scanf("%d", &J);
        print_Jbox(J);
        printf("\n");
    }

    return 0;
}