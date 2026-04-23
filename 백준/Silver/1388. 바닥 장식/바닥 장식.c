#include <stdio.h>
#include <stdbool.h>

int N, M;
char map[50][50];
bool visited[50][50] = {false};

char getShape(int x, int y) {
    if(x < 0 || x >= N || y < 0 || y >= M) return '0';
    return map[x][y];
}

void visit(int x, int y) {
    if(visited[x][y]) return;
    visited[x][y] = true;
    if(map[x][y] == '-') {
        if(getShape(x, y+1) == '-') visit(x, y+1);
    }
    if(map[x][y] == '|') {
        if(getShape(x+1, y) == '|') visit(x+1, y);
    }
}

int main(void) {
    scanf("%d %d", &N, &M);

    getchar();

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            map[i][j] = getchar();
        }
        getchar();
    }

    int result = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(!visited[i][j]) {
                visit(i, j);
                result++;
            }
        }
    }

    printf("%d", result);

    return 0;
}