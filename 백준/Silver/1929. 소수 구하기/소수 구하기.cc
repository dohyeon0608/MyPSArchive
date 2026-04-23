#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N;
    cin >> M >> N;
    
    int primes[1000001] = {0};
    primes[1] = 1;
    
    for(int n = 2; n * n <= N; n++) { // 거르기
        if(primes[n] == 1) continue;
        for(int k = 2; n * k <= N; k++) { 
            primes[n * k] = 1;
        }
    }
    
    for(int n = M; n <= N; n++) { // 출력
        if(primes[n] == 0) cout << n << "\n";
    }

    return 0;
}