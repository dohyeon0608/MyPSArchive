#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int digit = 0;
    vector<int> digits;
    while(n > 0) {
        digits.push_back(n % 3);
        n /= 3;
    }
    
    int S = digits.size();
    
    for(int i = S - 1; i >= 0; i--) {
        answer += digits[i] * pow(3, S-i-1);
    }
    return answer;
}