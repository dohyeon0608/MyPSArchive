#include <iostream>
#include <queue>
#include <string>

using namespace std;

bool visited[101][101];
int N, M;

struct Point {
    int x;
    int y;
    int step;
};

int counter = 0;

void bfs(int x, int y) {
    queue<Point> Q;
    Q.push(Point{ x, y, 1 });

    while (!Q.empty()) {
        Point p = Q.front();
        visited[p.x][p.y] = true;
        Q.pop();

        if (p.x == N - 1 && p.y == M - 1) {
            cout << p.step;
            break;
        }

        // 기존 문제점: 중복된 점이 큐에 들어옴
        if (p.x > 0 && !visited[p.x - 1][p.y]) {
            visited[p.x-1][p.y] = true; // 최적화
            Q.push(Point{p.x - 1, p.y, p.step + 1});
        }
        if (p.y > 0 && !visited[p.x][p.y - 1]) {
            visited[p.x][p.y - 1] = true;
            Q.push(Point{ p.x, p.y - 1, p.step + 1 });
        }
        if (p.x < N-1 && !visited[p.x + 1][p.y]) {
            visited[p.x + 1][p.y] = true;
            Q.push(Point{ p.x + 1, p.y, p.step + 1 });
        }
        if (p.y < M-1 && !visited[p.x][p.y + 1]) {
            visited[p.x][p.y + 1] = true;
            Q.push(Point{ p.x, p.y + 1, p.step + 1 });
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    fill(visited[0], visited[0] + 10000, true);

    cin >> N >> M;

    string buffer;
    for (int i = 0; i < N; i++) {
        cin >> buffer;
        for (int j = 0; j < M; j++) {
            visited[i][j] = !(buffer[j] - '0');
        }
    }

    bfs(0, 0);

    return 0;
}