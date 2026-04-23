#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main(void) {
    int N; // 수열의 길이
    int A[1001] = {0}; // 수열 A
    int D[1001] = {0}; // A[i]를 끝 원소로 갖는 부분 수열의 최대 길이

    cin >> N;

    int result = 0;

    // 실행 횟수: N(N-1)/2 / N=1000(최대)일 때, 499,500회 실행됨
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
        int max_di = 0; // 0~i-1 까지 D[i]의 최댓값
        for(int j = i-1; j >= 0; j--) { // 탐색
            if(A[j] < A[i]) {
                max_di = max(max_di, D[j]);
            }
            D[i] = max_di + 1; // 뒤에 붙이기
            result = max(result, D[i]);
        }
    }

    cout << result << "\n";
    
    return 0;
}