#include <iostream>

using namespace std;

int main(void) {
    int T, N;
    cin >> T;
    
    int A, B;
    for(int i = 0; i < T; i++) {
        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> A >> B;
            cout << A+B << " " << A*B << "\n";
        }
    }
    return 0;
}