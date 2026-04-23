#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int x = 0, y = 0; // 좌표
    int d = 0; // 방향 (N, E, W, S)
    int ds = 1; // 이동 거리
    int ds_turn = 1; // 이동 유지 턴
    int next_move = ds; // 다음까지 남은 수

    for(int t = 0; t < n; t++) {
        // 이동
        if(d % 2 == 1) x += (2 - d);
        if(d % 2 == 0) y += (1 - d);

        next_move--;

        if(ds_turn == 0) {
            ds++;
            ds_turn = 2;
        }

        if(next_move == 0) {
             d = (d + 1) % 4; // 방향 전환
             next_move = ds;
             ds_turn--;
        }
    }

    printf("%d %d", x, y);
    

    return 0;
}