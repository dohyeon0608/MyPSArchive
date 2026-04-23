#include <iostream>
#include <queue>

using namespace std;

struct Point {
    int x;
    int y;
};

int main(void) {
    int N, M;
    char campus[600][600];
    queue<Point> Q;
    int result = 0;

    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> campus[i];
        for(int j = 0; j < M; j++) {
            if(campus[i][j] == 'I') {
                Q.push(Point{i, j});
                campus[i][j] = 'X';
            }
        }
    }

    while(!Q.empty()) {
        Point p = Q.front();
        Q.pop();

        Point hubos[4] = {
            Point{p.x - 1, p.y},
            Point{p.x, p.y - 1},
            Point{p.x + 1, p.y},
            Point{p.x, p.y + 1}
        };

        for(auto hubo : hubos) {
            if(hubo.x < 0 || hubo.x >= N || hubo.y < 0 || hubo.y >= M) continue;
            char* pos = &campus[hubo.x][hubo.y];
            if(*pos != 'X') {
                if(*pos == 'P') result++;
                Q.push(hubo);
                *pos = 'X';
            }
        }
    }

    if(result > 0) cout << result;
    else cout << "TT";

    return 0;
}