#include <iostream>

using namespace std;

int euclidean(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    return euclidean(b, r);
}

int main() {
    int T;
    cin >> T;
    
    int A, B;
    int a, b;
    for(int i = 0; i < T; i++) {
        cin >> A >> B;
        if(A > B) {a = A; b = B;}
        else {a = B; b = A;}
        int GCD = euclidean(a, b);
        cout << (A * B) / GCD << "\n";
    }

    return 0;
}