#include <iostream>

using namespace std;

int main(void) {
    int N, X, A, last_A;
    int result = -1;

    cin >> N >> X;
    for(int i = 0; i < N; i++) {
        cin >> A;
        if(i == 0) {
            last_A = A;
            continue;
        }

        int hubo = last_A * X + A * X;
        if(hubo < result || result == -1) result = hubo;
        
        last_A = A;
    }

    cout << result;
    
    return 0;
}