#include <iostream>

using namespace std;

int N, M, K;
    
int A[100][100];
int B[100][100];

int getCij(int i, int j) {
    int result = 0;
    for(int k = 0; k < M; k++) {
        result += A[i][k] * B[k][j];
    }
    return result;
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < K; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {
            cout << getCij(i, j) << " ";
        }
        cout << "\n";
    }
    
    return 0;
}