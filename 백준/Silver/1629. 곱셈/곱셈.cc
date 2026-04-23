#include <iostream>

using namespace std;

int A, B, C;

// a^n 계산
int multiply(int m, int step) {
    if(m == 1) return A % C;
    else {
        long long result = (multiply(m/2, step+1) % C);
        result = (result * result) % C;
        if (m % 2 == 1) result *= (A % C);
        return result % C;
    }
}

int main() {
    cin >> A >> B >> C;
    
    cout << multiply(B, 0);

    return 0;
}