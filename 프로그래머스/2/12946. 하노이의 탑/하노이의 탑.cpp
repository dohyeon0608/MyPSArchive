#include <string>
#include <vector>

using namespace std;

// p에 있던 원판 n개를 q로 옮기는 함수
void f(vector<vector<int>> &ans, int p, int q, int n) {
    vector<int> res(2);
    if(n == 1) {
        res = {p, q};
        ans.push_back(res);
    } else {
        int r = 6-(p+q); // p, q를 제외한 나머지
        f(ans, p, r, n-1);
        res = {p, q};
        ans.push_back(res);
        f(ans, r, q, n-1);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    f(answer, 1, 3, n);
    return answer;
}