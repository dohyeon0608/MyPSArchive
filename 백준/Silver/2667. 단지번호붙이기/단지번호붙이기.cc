#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// dfs ver.

using namespace std;

int N;

// 방문 여부
bool visited[25][25] = { false };

// 집이 있는 지 여부
bool house[25][25];

// 결과 저장
vector<int> result(625);

// 탐색. (p: 고유 번호, x, y: 집이 들어 있는 좌표)
void dfs(int p, int x, int y) {
    visited[x][y] = true;
    result[p]++;
    if (x > 0 && !visited[x - 1][y] && house[x - 1][y]) {
        dfs(p, x - 1, y);
    }
    if (y > 0 && !visited[x][y - 1] && house[x][y - 1]) {
        dfs(p, x, y - 1);
    }
    if (x < N - 1 && !visited[x + 1][y] && house[x + 1][y]) {
        dfs(p, x + 1, y);
    }
    if (y < N - 1 && !visited[x][y + 1] && house[x][y + 1]) {
        dfs(p, x, y + 1);
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    // 입력
    string buffer;

    for (int x = 0; x < N; x++) {
        cin >> buffer;
        for (int i = 0; i < N; i++) {
            house[x][i] = buffer[i] - '0';
        }
    }

    // 단지 개수
    int p = 0;

    // 탐색 시작
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            if (!visited[x][y] && house[x][y]) {
                dfs(p++, x, y);
            }
        }
    }

    // 정렬
    sort(result.begin(), result.end());

    // 출력
    cout << p << "\n";
    for (auto i : result) {
        if (i == 0) continue;
        cout << i << "\n";
    }

    return 0;
}