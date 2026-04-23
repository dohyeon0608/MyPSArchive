#include <iostream>

using namespace std;

long GCD(long long int a, long long int b) {
    if(a % b == 0) return b;
    else return GCD(b, a % b);
}

int main() {
    long long int A, B;
    cin >> A >> B;
    
    if(A < B) {
        long long int temp; temp = B; B = A; A = temp;
    }
    
    cout << A / GCD(A, B) * B << "\n";

    return 0;
}