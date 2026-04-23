#include <iostream>

using namespace std;

bool video[64][64];

int check(int x, int y, int size) {
    bool result = video[x][y];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(result != video[x+i][y+j]) return 2;
        }
    }
    return result;
}

void compress(int x, int y, int size) {
    if(check(x, y, size) != 2) {
        cout << check(x, y, size);
    } else {
        int n_size = size / 2;
        cout << "(";
        compress(x, y, n_size);
        compress(x, y+n_size, n_size);
        compress(x+n_size, y, n_size);
        compress(x+n_size, y+n_size, n_size);
        cout << ")";
    }
}

int main(void) {
    int N;
    cin >> N;
    
    string x;
    for(int i = 0; i < N; i++) {
        cin >> x;
        for(int j = 0; j < N; j++) {
            video[i][j] = x[j] - '0';
        }
    }
    
    compress(0, 0, N);
    
    return 0;
}