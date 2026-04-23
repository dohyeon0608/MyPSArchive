#include <iostream>
#include <vector>
#define MAX 5000001

using namespace std;

bool is_prime[MAX];

void factorization(vector<int> &primes, int k) {
    for(auto i : primes) {
        if(i > k) break;
        while(k % i == 0) {
            k /= i;
            cout << i << " ";
        }
        if(is_prime[k]) {
            cout << k;
            break;
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> primes; // 348513개
    fill(is_prime, is_prime + MAX - 1, true);
    is_prime[1] = false; // 1은 소수가 아님!
    
    cin >> N;
    
    // 그 체
    for(int n = 2; n < MAX; n++) {
        if(!is_prime[n]) continue;
        primes.push_back(n);
        for(int k = 2*n; k < MAX; k += n) {
            is_prime[k] = false;
        }
    }

    int k;
    while(N-- > 0) {
        cin >> k;
        factorization(primes, k);
    }

    return 0;
}