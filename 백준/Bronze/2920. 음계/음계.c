#include <stdio.h>

int main(void) {
    int n[8];
    for(int i = 0; i < 8; i++) {
        scanf("%d", &n[i]);
    }

    int isAscending = 1;
    int isDesending = 1;

    for(int i = 1; i <= 8; i++) {
        int now = n[i-1];
        if(now != i)
            isAscending = 0;
        if(now != (9 - i))
            isDesending = 0;
    }

    if(isAscending) 
        printf("ascending\n");
    else if(isDesending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}