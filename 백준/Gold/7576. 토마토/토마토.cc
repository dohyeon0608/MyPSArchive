#include <iostream>
#include <queue>

using namespace std;

struct State {
    int x;
    int y;
    int day;
};

int counter = 0;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;

    int leftSpace = M * N;

    queue<State> Q;
    int day = 0;

    bool visited[1000][1000] = { false };
    int tomato;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            cin >> tomato;
            if (tomato == 1) {
                visited[x][y] = true;
                Q.push(State{ x, y, 0 });
            }
            else if (tomato == -1) {
                leftSpace--;
                visited[x][y] = true;
            }
        }
    }

    while (!Q.empty()) {
        State s = Q.front();
        leftSpace--;
        if (day != s.day) {
            day = s.day;
            //for (int y = 0; y < N; y++) {
            //    for (int x = 0; x < M; x++) {
            //        cout << visited[x][y];
            //    }
            //    cout << "\n";
            //}
            //cout << "\n";
        }
        Q.pop();

        if (s.x > 0 && !visited[s.x - 1][s.y]) {
            visited[s.x - 1][s.y] = true;
            Q.push(State{ s.x - 1, s.y, s.day + 1 });
        }
        if (s.y > 0 && !visited[s.x][s.y - 1]) {
            visited[s.x][s.y - 1] = true;
            Q.push(State{ s.x, s.y - 1, s.day + 1 });
        }
        if (s.x < M - 1 && !visited[s.x + 1][s.y]) {
            visited[s.x + 1][s.y] = true;
            Q.push(State{ s.x + 1, s.y, s.day + 1 });
        }
        if (s.y < N - 1 && !visited[s.x][s.y + 1]) {
            visited[s.x][s.y + 1] = true;
            Q.push(State{ s.x, s.y + 1, s.day + 1 });
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