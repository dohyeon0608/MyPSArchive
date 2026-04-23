#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, prime = 2;
    cin >> N;

    while(N != 1) {
        if(N % prime == 0) {
            N /= prime;
            cout << prime << "\n";
        } else {
            prime++;
        }
    }

    return 0;
}