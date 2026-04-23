#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    // 부분 문제: k를 끝 위치로 하는 부분 수열의 합의 최댓값 구하기
    // dp[부분 수열 끝 위치] = 이 때의 최댓값;
    int dp[100000] = {0};
    int x;
    
    // i = 부분 수열 시작 위치
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(i == 0) {
            dp[0] = x;
            continue;
        }
        // 만약 x가 기존 합보다 크다면, 기존합 폐지
        if(x > dp[i-1] + x) {
            dp[i] = x;
        } else {
            dp[i] = dp[i-1] + x;
        }
    }
    
    int max = dp[0];
    
    // 최댓값 찾기
    for(int i = 1; i < n; i++) {
        if(max < dp[i]) {
            max = dp[i];
        }
    }
    
    cout << max << "\n";

    return 0;
}