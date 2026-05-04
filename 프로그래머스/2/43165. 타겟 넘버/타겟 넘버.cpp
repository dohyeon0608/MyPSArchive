#include <string>
#include <vector>

using namespace std;

int sum = 0;
int answer = 0;

void solve(vector<int> &numbers, int &target, int i) {
    if(i == numbers.size()) {
        if(sum == target)
            answer++;
    } else {
        // 더하기인 경우
        sum += numbers[i];
        solve(numbers, target, i+1);
        sum -= numbers[i]; // 초기화
        
        // 빼기인 경우
        sum -= numbers[i];
        solve(numbers, target, i+1);
        sum += numbers[i]; // 초기화
    }
}

int solution(vector<int> numbers, int target) {
    solve(numbers, target, 0);
    return answer;
}