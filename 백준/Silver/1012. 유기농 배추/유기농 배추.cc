#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N;

// 방문 여부
bool visited[50][50];

// 방문 여부 초기화
void clear_visited() {
    fill(&visited[0][0], &visited[0][0] + 2500, true);
}

// 탐색
// N, M: 크기, x, y: 좌표
void dfs(int &N, int &M, int x, int y) {
    visited[x][y] = true;
    if (x > 0 && !visited[x - 1][y]) {
        dfs(N, M, x - 1, y);
    }
    if (y > 0 && !visited[x][y - 1]) {
        dfs(N, M, x, y - 1);
    }
    if (x < N - 1 && !visited[x + 1][y]) {
        dfs(N, M, x + 1, y);
    }
    if (y < M - 1 && !visited[x][y + 1]) {
        dfs(N, M, x, y + 1);
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T-- > 0) {
        clear_visited();

        int N, M, K;
        cin >> N >> M >> K;

        int x, y;
        int result = 0;
        for (int i = 0; i < K; i++) {
            cin >> x >> y;
            visited[x][y] = false;
        }

        // 탐색
        for (int x = 0; x < N; x++) {
            for (int y = 0; y < M; y++) {
                if (!visited[x][y]) {
                    result++;
                    dfs(N, M, x, y);
                }
            }
        }

        cout << result << "\n";
    }
    return 0;
}