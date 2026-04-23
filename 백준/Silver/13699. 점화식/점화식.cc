#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    long long int t[36] = {1, 0,};
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= i-1; j++) {
            t[i] += t[j] * t[i-1-j];
        }
    }
    
    cout << t[n] << "\n";
    
    return 0;
}