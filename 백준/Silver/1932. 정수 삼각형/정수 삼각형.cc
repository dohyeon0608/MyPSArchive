#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main(void) {
    int n;
    int S[500][500];
    int sum[500][500];

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cin >> S[i][j];
        }
    }

    // 초깃값
    sum[0][0] = S[0][0];

    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0) sum[i][j] = sum[i-1][j] + S[i][j];
            else if(j == i) sum[i][j] = sum[i-1][j-1] + S[i][j];
            else sum[i][j] = max(sum[i-1][j], sum[i-1][j-1]) + S[i][j];
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++) {
        if(sum[n-1][i] > result) result = sum[n-1][i];
    }

    cout << result << "\n";

    return 0;
}