#include <iostream>
#include <map>
#define M 1000001 // sqrt 1,000,001,000,000

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int min, max;
    cin >> min >> max;
    
    long long int result = max - min + 1;
    
    bool prime[M] = {false}; // false = 소수
    bool isSquared[M] = {false}; // false = 제곱ㄴㄴ수, index = x - min (min과의 거리)
    
    prime[1] = true;
    
    for(long long int i = 2; i*i <= max; i++) { // '그 체'
        if(prime[i]) continue;
        
        long long int square = i*i;
        
        for(long long int k = square * ((min / square) + !(min%square==0)); k <= max; k += square) { // k 초깃값 = min보다 크거나 같은 수 중 square의 배수인 수의 최솟값
            int index = k - min;
            if(!isSquared[index]) {
                result--;
                isSquared[index] = true; // 교집합 처리
            }
        }
        
        for(int k = i*2; k <= M; k += i) prime[k] = true;
    }
    
    cout << result << "\n";
    
    return 0;
}