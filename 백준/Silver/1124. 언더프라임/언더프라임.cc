#include <iostream>
#include <vector>

using namespace std;

// 최악의 경우 반복 횟수 318 * 99999 = 대략 3180만 < 1억

bool is_prime[318] = {false, false}; // 어차피 루트n까지만 나눠주면 되므로 sqrt(10^5)까지 나눠준다.
vector<int> primes;

bool is_underprime(int k) {
    int count = 0;
    for(auto p : primes) {
        if(p > k) {
            break;
        }
        while(k % p == 0) {
            k /= p;
            count++;
        }
    }
    if(k != 1) count++;
    return is_prime[count];
}

int main(void) {
    int A, B;
    fill(is_prime + 2, is_prime + 317, true);

    cin >> A >> B;

    // "그 체"
    for(int i = 2; i < 318; i++) {
        if(!is_prime[i]) continue;
        primes.push_back(i);
        for(int k = 2*i; k <= 318; k += i) is_prime[k] = false;
    }

    int result = 0;
    for(int k = A; k <= B; k++) {
        result += is_underprime(k);
    }
    
    cout << result << "\n";
    return 0;
}