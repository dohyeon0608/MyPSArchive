#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    // 문제에서 i<N*K에 유의!
    
    // K는 1의 개수
    // N*K - 1은 전체 길이
    if (K >= N * K) {
        for (int i = 0; i < N * K; i++) {
            cout << "1 ";
        }
    }
    else if (K + 1 == N * K) { // N != 1
        for (int i = 0; i < N * K - 1; i++) {
            cout << "1 ";
        }
        cout << "2 ";
    }
    else {
        cout << "-1";
    }

    return 0;
}