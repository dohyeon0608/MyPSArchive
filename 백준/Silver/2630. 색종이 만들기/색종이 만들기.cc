#include <iostream>

using namespace std;

bool paper[128][128];
int white = 0, blue = 0;

// 0 = white, 1 = blue, 2 = none
int check(int x, int y, int size) {
    bool result = paper[x][y];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(result != paper[x+i][y+j]) return 2;
        }
    }
    return result;
}

void count(int x, int y, int size) {
    if(check(x, y, size) != 2) {
        if(check(x, y, size) == 0) white++;
        else blue++;
    } else {
        int n_size = size / 2;
        count(x, y, n_size);
        count(x, y+n_size, n_size);
        count(x+n_size, y, n_size);
        count(x+n_size, y+n_size, n_size);
    }
}

int main(void) {
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }
    
    count(0, 0, N);
    
    cout << white << "\n" << blue << "\n";
    
    return 0;
}