#include <iostream>

using namespace std;

int main() {
    long long int dp[100] = {1, 1, 1, 2, 2,};
    
    for(int i = 5; i < 100; i++) {
        dp[i] = dp[i-5] + dp[i-1];
    }
    
    int T;
    cin >> T;
    
    int x;
    for(int i = 0; i < T; i++) {
        cin >> x;
        cout << dp[x-1] << "\n";
    }

    return 0;
}