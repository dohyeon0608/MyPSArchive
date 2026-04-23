#include <stdio.h>

int main(void) {
    int R, C;
    char plane[101][101];

    while(1) {
        scanf("%d %d", &R, &C);
        if(R * C == 0) break;

        for(int r = 0; r < R; r++) {
            scanf("%s", &plane[r]);
        }

        for(int r = 0; r < R; r++) {
        for(int c = 0; c < C; c++) {
            int mineCount = 0;
            if(plane[r][c] == '*') {
                printf("*");
                continue;
            }

            for(int r0 = r-1; r0 <= r+1; r0++) {
            for(int c0 = c-1; c0 <= c+1; c0++) {
                if(r0 == r && c0 == c) continue;
                if(r0 < 0 || r0 >= R) continue;
                if(c0 < 0 || c0 >= C) continue;
                if(plane[r0][c0] == '*') mineCount++;
            }  
            }

            printf("%d", mineCount);
        }
        printf("\n");
        }
    }

    return 0;
}