#include <iostream>
#include <map>

using namespace std;

bool isPrime(long long int n) {
    bool result = true;
    for(long long int k = 2; k * k <= n; k++) { // 1.6 * 10^19 < 9.2 * 10^19
        if(n % k == 0) {
            result = false;
            break;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<long long int, bool> isPrimeMap; // 이전에 탐색한 결과 저장
    
    int T;
    cin >> T;
    
    long long int n;
    
    // 반례 처리 (n < 2일 수도!) <문제 조건을 잘 읽자>
    isPrimeMap[0] = false;
    isPrimeMap[1] = false;
    
    for(int i = 0; i < T; i++) {
        cin >> n;
        
        while(true) {
            if(isPrimeMap.find(n) == isPrimeMap.end()) { // 이전에 탐색하지 않았다면
                isPrimeMap[n] = isPrime(n);
            }
            
            if(isPrimeMap[n]) {
                cout << n << "\n"; // 결과 출력
                break;
            } else {
                n++;
            }
        }
    }

    return 0;
}