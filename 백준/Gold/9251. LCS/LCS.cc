#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string A, B;
    cin >> A >> B;

    int la = A.length(), lb = B.length();
    
    int dp[la+1][lb+1];
    fill(dp[0], dp[0] + (la+1) * (lb+1), 0);
    int result = 0;
    
    for(int i = 1; i <= la; i++) {
        for(int j = 1; j <= lb; j++) {
            if(A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            if(dp[i][j] > result) result = dp[i][j];
        }
    }

    cout << result << "\n";

    return 0;
}