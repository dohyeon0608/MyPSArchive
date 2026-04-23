#include <iostream>

using namespace std;

short max(short a, short b) {
    return (a > b)? a : b;
}

int main(void) {
    int N;
    short A[1000];
    short dp[1000] = {0};

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    short result = 0;

    for(int i = 0; i < N; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(A[j] > A[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        result = max(result, dp[i]);
    }

    cout << result << "\n";

    return 0;
}