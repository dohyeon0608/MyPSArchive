#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main(void) {
    int N;
    int A[1000];
    int dp[1000] = {0}; // 합이므로 int형으로 처리

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = 0;

    for(int i = 0; i < N; i++) {
        dp[i] = A[i];
        for(int j = 0; j < i; j++) {
            if(A[j] < A[i]) {
                dp[i] = max(dp[i], dp[j] + A[i]);
            }
        }
        result = max(result, dp[i]);
    }

    cout << result << "\n";

    return 0;
}