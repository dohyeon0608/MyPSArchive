#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // dp = 규칙 찾기!!
    // + map보다 int배열이 빠르다.
    int dp[50001]; // dp[n] : 제곱수 합의 최소 개수
    
    for(int i = 1; i <= n; i++) {
        dp[i] = dp[i-1] + 1;
        for(int j = 1; j * j <= i; j++) {
            int hubo = 1 + dp[i - j*j]; // dp[i*i] == 1 (i in N)
            if(hubo < dp[i]) dp[i] = hubo;
        }
    }
    
    cout << dp[n] << "\n";

    return 0;
}