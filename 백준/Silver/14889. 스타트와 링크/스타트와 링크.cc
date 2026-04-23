#include <iostream>
#include <vector>

using namespace std;

/*
시간 복잡도: f(n) = nCn/2 * nC2 -> ??
최대 연산 횟수: 35,103,640회 (n = 20)
*/

int N;
int abl[20][20];
int result = -1;

void solve(bool v[], int max, int step) {
    if(step == N/2) {
        // 계산 시작
        int start = 0, link = 0;
        for(int i = 0; i < N; i++) {
            for(int j = i+1; j < N; j++) {
                if(v[i] != v[j]) continue;
                if(v[i]) start += (abl[i][j] + abl[j][i]);
                else link += (abl[i][j] + abl[j][i]);
            }
        }
        int dif = start - link;
        if(dif < 0) dif *= -1;
        if(result == -1 || dif < result) result = dif;
        return;
    }
    // N개 중에서 N/2개 고르기
    if(N - max < N/2 - step) return;
    for(int i = max+1; i < N; i++) {
        v[i] = true;
        solve(v, i, step + 1);
        v[i] = false;

        if(result == 0) return; // 어차피 0인데...
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool team_person[20] = {false};
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> abl[i][j];
        }
    }

    solve(team_person, -1, 0);
    cout << result << "\n";

    return 0;
}