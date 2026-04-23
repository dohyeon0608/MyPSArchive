#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    
    int table[50][50];
    string x;
    for(int i = 0; i < N; i++) {
        cin >> x;
        for(int j = 0; j < M; j++) {
           table[i][j] = x[j] - '0';
        }
    }
    
    int max_size = min(N, M);
    int size;
    
    for(size = max_size; size >= 1; size--) {
        for(int i = 0; i <= N - size; i++) {
            for(int j = 0; j <= M - size; j++) {
                if(
                    table[i][j] == table[i][j+size-1] &&
					table[i][j+size-1] == table[i+size-1][j] &&
                    table[i+size-1][j] == table[i+size-1][j+size-1] &&
                    table[i+size-1][j+size-1] == table[i][j]
                    ) {
                        cout << size * size;
                        return 0;
                    }
            }
        }
    }
    
    return 0;
}