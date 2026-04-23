#include <iostream>

using namespace std;

int N, M;

int sum(int a, int b) {
    return (a%M+b%M)%M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    // 부분합 이용 (최적화를 위해 마지막만 기억)
    int last_sum = 0;
    
    // mod_count[나머지] = S_i = (나머지)를 만족하는 i의 개수
    int mod_count[1000] = {0};
    int x;
    
    // 누적합 (with mod)
    for(int i = 0; i < N; i++) {
        cin >> x;
        last_sum = sum(last_sum, x);
        mod_count[last_sum]++;
    }
    
    long long int result = mod_count[0];
    
    // S_i, S_j의 나머지가 같다면 S_j - S_i == 0이라는 말이고, 이는 부분합이 M으로 나누어 떨어짐을 의미한다. (기존 i,j 이중 반복에서 최적화)
    // 나머지가 같은 S_i 중에서 두 개의 i 선택 (nCr에서 무조건 r=2)
    for(int k = 0; k < M; k++) {
        // 틀렸습니다가 나오면 큰 수부터 의심해보기
        result += (long long) mod_count[k] * (mod_count[k] - 1) / 2;
    }
    
    cout << result << "\n";

    return 0;
}