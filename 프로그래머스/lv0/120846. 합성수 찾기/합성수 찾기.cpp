#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n - 1;
    vector<int> pn;
    
    for(int k = 2; k <= n; k++) {
        bool flag = true;
        for(auto i : pn) {
            if(k % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            // 소수
            pn.push_back(k);
            answer--;
        }
    }
    return answer;
}