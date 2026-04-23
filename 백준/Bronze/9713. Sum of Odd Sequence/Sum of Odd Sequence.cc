#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    int N;
    for(int i = 0; i < T; i++) {
        cin >> N;
        N = (N+1)/2;
        cout << N*N << "\n";
    }
    
    return 0;
}