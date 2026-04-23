#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
MEMO
걸리는 시간 = Sum_{i=0}^{n-1} {(n-i)P_i}
즉, P_i에서 i 값이 작으면 P_i도 작아야 한다. (n-i)는 i가 커짐에 따라 작아지기 때문이다.
따라서 P_i를 오름차순으로 정렬해야 한다.
result의 최댓값 = 1000*(1+2+3+...+1000)=약 5억 (int 범위 내)
*/

int main() {
    int result = 0;
    
    int N;
    cin >> N;
    
    vector<int> P_i;
    int x;
    for(int i = 0; i < N; i++) {
        cin >> x;
        P_i.push_back(x);
    }
    
    sort(P_i.begin(), P_i.end());
    
    for(int i = 0; i < N; i++) {
        result += (N-i) * P_i[i];
    }
    
    cout << result << "\n";

    return 0;
}