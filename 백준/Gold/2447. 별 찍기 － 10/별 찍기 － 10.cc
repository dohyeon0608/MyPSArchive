#include <iostream>
#include <cmath>

using namespace std;

// 별 여부
bool is_star[6562][6562] = {false,};
int N;

void star(int x, int y, int size) {
    if(size == 1) { 
        is_star[x][y] = true;
    } else {
        int n_size = size / 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(i == 1 && j == 1) continue;
                star(x + i * n_size, y + j * n_size, n_size);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    star(0, 0, N);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << (is_star[i][j]? '*' : ' ');
        }
        cout << "\n";
    }

    return 0;
}