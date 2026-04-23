#include <iostream>
#include <algorithm>
#include <vector>

/*
A, B 둘다 정렬한 후, A의 i번째와 B의 N-i-1번째를 짝짓는다.
이제 이러한 관계를 유지한 채로, B를 원래 배열로 재배열한다면 A만 재배열했다고 할 수 있다.
*/

using namespace std;

int main() {
    int N;
    
    cin >> N;
    
    vector<int> A;
    vector<int> B;
    
    int x;
    
    int result = 0;
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        A.push_back(x);
    }
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        B.push_back(x);
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for(int i = 0; i < N; i++) {
        result += A[i] * B[N-1-i];
    }
    
    cout << result << "\n";
    
    return 0;
}