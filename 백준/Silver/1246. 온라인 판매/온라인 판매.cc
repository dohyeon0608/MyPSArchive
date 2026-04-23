#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<int> Pi;
    int x;
    for(int i = 0; i < M; i++) {
        cin >> x;
        Pi.push_back(x);
    }

    sort(Pi.begin(), Pi.end());
    
    // 가격=P_i 전후로 구매하는 고객 수가 달라진다.
    // 이들을 기준으로 하여 최대 수익을 구해보자.
    int price = Pi[0];
    int result = Pi[0] * N;
    for(int i = 1; i < M; i++) {
        int hubo = Pi[i];
        if(M-i < N) hubo *= (M-i); // 달걀 수가 충분하다면
        else hubo *= N; // 달걀 수가 N개를 넘는다면 (총 수량 초과)
        
        if(hubo > result) {
            price = Pi[i];
            result = hubo;
        }
    }

    cout << price << "\n" << result << "\n";
    
    return 0;
}