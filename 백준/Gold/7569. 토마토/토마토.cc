#include <iostream>
#include <queue>

using namespace std;

struct State {
    int x;
    int y;
    int z;
    int day;
};

int counter = 0;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, H;
    cin >> M >> N >> H;

    int leftSpace = M * N * H;

    queue<State> Q;
    int day = 0;

    bool visited[100][100][100] = {false};
    int tomato;
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                cin >> tomato;
                if (tomato == 1) {
                    visited[x][y][z] = true;
                    Q.push(State{ x, y, z, 0 });
                }
                else if (tomato == -1) {
                    leftSpace--;
                    visited[x][y][z] = true;
                }
            }
        }
    }

    while (!Q.empty()) {
        State s = Q.front();
        leftSpace--;
        if (day != s.day) {
            day = s.day;
        }
        Q.pop();

        if (s.x > 0 && !visited[s.x - 1][s.y][s.z]) {
            visited[s.x - 1][s.y][s.z] = true;
            Q.push(State{ s.x - 1, s.y, s.z, s.day + 1 });
        }
        if (s.y > 0 && !visited[s.x][s.y - 1][s.z]) {
            visited[s.x][s.y - 1][s.z] = true;
            Q.push(State{ s.x, s.y - 1, s.z, s.day + 1 });
        }
        if (s.z > 0 && !visited[s.x][s.y][s.z - 1]) {
            visited[s.x][s.y][s.z - 1] = true;
            Q.push(State{ s.x, s.y, s.z - 1, s.day + 1 });
        }
        if (s.x < M - 1 && !visited[s.x + 1][s.y][s.z]) {
            visited[s.x + 1][s.y][s.z] = true;
            Q.push(State{ s.x + 1, s.y, s.z, s.day + 1 });
        }
        if (s.y < N - 1 && !visited[s.x][s.y + 1][s.z]) {
            visited[s.x][s.y + 1][s.z] = true;
            Q.push(State{ s.x, s.y + 1, s.z, s.day + 1 });
        }
        if (s.z < H - 1 && !visited[s.x][s.y][s.z + 1]) {
            visited[s.x][s.y][s.z + 1] = true;
            Q.push(State{ s.x, s.y, s.z + 1, s.day + 1 });
        }
    }

    if (leftSpace != 0) {
        cout << -1;
    }
    else {
        cout << day;
    }

    return 0;
}