#include <iostream>
#include <string>
#define r 31
#define M 1234567891

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    long long int rn = 1;
    string x;
    long long result = 0;
    
    cin >> x;
    
    for(int i = 0; i < n; i++) {
        result += ((x[i] - 'a' + 1) * rn) % M;
        result %= M;
        rn = (rn * r) % M;
    }
    
    cout << result << "\n";

    return 0;
}