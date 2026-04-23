#include <iostream>

using namespace std;

bool checkPrime(int);

int main() {
    int M, N, sum = 0, min = 0;
    cin >> M >> N;

    for(int k = M; k <= N; k++) {
        if(checkPrime(k)) {
            if(min == 0) min = k;
            sum += k;
        }
    }

    if(sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << "\n" << min << endl;
    }

    return 0;
}

bool checkPrime(int n) {
    if(n == 1) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}