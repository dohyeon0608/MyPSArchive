#include <iostream>

using namespace std;

int N;
int counts[3] = {0,};
short paper[2187][2187];

int check(int x, int y, int size) {
    int result = paper[x][y];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(result != paper[x+i][y+j]) return 2;
        }
    }
    return result;
}

void count(int x, int y, int size) {
    int check_result = check(x, y, size);
    if(check_result != 2) {
        counts[check_result + 1]++;
    } else {
        int new_size = size / 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                count(x+i*new_size, y+j*new_size, new_size);
            }
        }
    }
}

int main(void) {
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }
    
    count(0, 0, N);
    
    for(int i = 0; i < 3; i++) {
        cout << counts[i] << "\n";
    }
    
    return 0;
}