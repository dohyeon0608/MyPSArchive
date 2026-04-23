#include <iostream>
#define M 1000001

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    bool prime[M] = {false}; // false = 소수
    prime[1] = true;
    for(int i = 2; i*i < M; i++) { // '그 체'
        if(prime[i]) continue;
        for(int k = i*2; k <= M; k += i) prime[k] = true;
    }
    
    // 최악: 50,000,000회 연산 (0.5초)
    int N;
    int result;
    for(int i = 0; i < T; i++) {
        cin >> N;
        result = 0;
        for(int i = 2; i*2 <= N; i++) {
            if(!prime[i] && !prime[N - i]) result++;
        }
        
        cout << result << "\n";
    }
    
    return 0;
}