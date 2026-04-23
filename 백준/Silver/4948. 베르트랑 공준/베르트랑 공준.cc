#include <iostream>
#define M 246913

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    bool primes[M] = {false}; // '그 체'
    primes[1] = true;
    for(int k = 2; k * k <= M; k++) {
        if(primes[k]) continue;
        for(int i = k*2; i <= M; i += k) primes[i] = true;
    }
    
    int n;
    int result;
    
    while(true) {
        cin >> n;
        
        if(n == 0) break;
        
        result = 0;
        for(int k = n+1; k <= 2*n; k++) {
            if(!primes[k]) result++;
        }
        
        cout << result << "\n";
    }

    return 0;
}