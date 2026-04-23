#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    int x; // 현재 입력 받는 수
    int last = 0; // 마지막으로 입력 받은 수
    int max = 0; // 지금까지 나온 수 중 최대
    bool impossible = false; // 불가능 여부 
    vector<char> result; // 출력 결과
    stack<int> numbers; // 검증용 스택
    
    for(int i = 0; i < n; i++) {
        cin >> x;
        
        if(impossible) {
            continue; // 일단 입력 다 받아야 함.
        } else {
            impossible = (max == n)? (x > last) : (x < last - 1 && x != numbers.top()); // impossible이 false일 때만 갱신하도록 수정
        }
        
        if(x > max) { // x가 max보다 클 때 (push)
            for(int xn = max; xn < x; xn++) {
                numbers.push(xn+1);
                result.push_back('+');
            }
            numbers.pop();
            result.push_back('-');
            max = x;
        } else { // 그냥 pop
            numbers.pop();
            result.push_back('-');
        }
        
        last = x;
    }
    
    if(impossible) {
        cout << "NO\n";
    } else {
        for(auto i : result) {
            cout << i << "\n";
        }
    }

    return 0;
}