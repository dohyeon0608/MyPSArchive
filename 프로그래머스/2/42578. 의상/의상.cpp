#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> cases;
    
    for(auto c : clothes) {
        cases[ c[1] ]++;
    }
    
    int answer = 1;
    
    for(auto cs : cases) {
        answer *= (cs.second + 1); // 기존 경우의 수 + 안 입는 경우의 수 1가지
    }
    
    answer--; // 모두 안 입는 경우 제외
    return answer;
}