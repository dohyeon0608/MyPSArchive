#include <stdio.h>

typedef struct {
    int x; int y;
} Pos;

int main(void) {
    Pos pos_list[3];
    Pos d_list[2];

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &pos_list[i].x, &pos_list[i].y);
        if(i > 0) {
            d_list[i-1].x = pos_list[i].x - pos_list[i-1].x;
            d_list[i-1].y = pos_list[i].y - pos_list[i-1].y;
        }
    }

    // det으로 degenerate case인지 확인
    if(d_list[0].x * d_list[1].y - d_list[1].x * d_list[0].y == 0) {
        printf("WHERE IS MY CHICKEN?");
    } else {
        printf("WINNER WINNER CHICKEN DINNER!");
    }

    return 0;
}