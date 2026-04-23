#include <iostream>

using namespace std;

int main() {
    bool is_prime[1001];
    fill(is_prime, is_prime + 1001, true);
    
    is_prime[0] = false; is_prime[1] = false;
    
    for(int i = 2; i < 1001; i++) {
        if(!is_prime[i]) continue;
        for(int j = i*2; j < 1001; j += i) is_prime[j] = false;
    }
    
    int N;
    cin >> N;
    
    cout << N << "\n";
    for(int i = 1; i < 1001; i++) {
        if(is_prime[i] || i == 1) {
            cout << i << " ";
            if(--N <= 0) break;
        }
    }

    return 0;
}