#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    bool primes[1000001] = {0};
    primes[1] = true;
    
    for(int i = 2; i * i <= n; i++) { // 거르기
        if(primes[i]) continue;
        for(int k = 2*i; k <= n; k += i) primes[k] = true;
    }
    
    for(int k = 2; k <= n; k++) { // 구하기
        if(!primes[k]) answer++;
    }
    
    return answer;
}