#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main(void) {
    int A[500] = {0}; // 1연속
    int B[500] = {0}; // 2연속

    int s[500]; // 계단 점수

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> s[i];
    }

    // 초깃값 설정
    if(N >= 1) {
        A[0] = s[0];
    }
    if(N >= 2) {
        A[1] = s[1];
        B[1] = s[0] + s[1];
    }
    
    for(int i = 2; i < N; i++) {
        A[i] = max(B[i-2] + s[i], A[i-2] + s[i]);
        B[i] = A[i-1] + s[i];
    }

    // for(int i = 0; i < N; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";

    // for(int i = 0; i < N; i++) {
    //     cout << B[i] << " ";
    // }
    // cout << "\n";

    int result = max(A[N-1], B[N-1]);

    cout << result << "\n";
    
    return 0;
}