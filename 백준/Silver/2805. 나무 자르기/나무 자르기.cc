#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 정렬 추가 + 빠른 입출력 ver.

vector<int> T; // 나무들의 높이
int N, M;

long long brings_length(long long H) {
    long long result = 0;
    for(auto t : T) {
        if(t - H < 0) break; // 정렬에 의한 최적화
        result += t - H;
    }
    return result;
}

// s: 구간 내 최소 높이
// e: 구간 내 최대 높이
int search(int s, int e) {
    int m = ((long long)s+e)/2;
    long long v_m = brings_length(m); // 중간 높이에 대한 길이

    if(v_m < M) {
        return search(s, m); // 너무 높아서 줄여야 됨
    } else {
        if(brings_length(m+1) < M) {
            return m; // 이것이 최댓값
        } else {
            return search(m+1, e); // 너무 짧아서 늘려야 됨
        }
    }
    
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    int x;
    int max = 0;
    for(int i = 0; i < N; i++) {
        cin >> x;
        if(x > max) max = x;
        T.push_back(x);
    }

    sort(T.begin(), T.end(), greater<int>());

    int result = search(0, max); // 0인 경우도 고려.
    cout << result << "\n";
    return 0;
}