#include <iostream>
#include <cmath>

using namespace std;

bool R[15] = {0}; // R to 2진수
bool C[15] = {0}; // C to 2진수

void search(int step, int begin, int size) {
    if(size == 0) {
        cout << begin << "\n";
    } else {
        int offset = R[step-1] * 2 + C[step-1];
        int new_size = size / 4;
        search(step-1, begin + offset * size, new_size);
    }
}

int main(void) {
    int N, r, c;
    cin >> N >> r >> c;

    for(int i = 0; i < N; i++) {
        R[i] = (r >> i) & 1;
        C[i] = (c >> i) & 1;
    }

    search(N, 0, pow(4, N-1));
    
    return 0;
}