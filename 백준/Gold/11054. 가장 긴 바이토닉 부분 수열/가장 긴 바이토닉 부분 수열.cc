#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main(void) {
    int N;
    int A[1000];

    int idp[1000] = {0}; // 왼쭉부터 증가하는 부분 순열
    int ddp[1000] = {0}; // 오른쪽부터 증가하는 부분 순열 (왼쪽 기준 감소)

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = 0;
    int i, j, I, J;

    for(i = 0; i < N; i++) {
        I = N-1-i;
        idp[i] = 1;
        ddp[I] = 1;
        for(j = 0; j < i; j++) {
            J = N-1-j;
            if(A[j] < A[i]) {
                idp[i] = max(idp[i], idp[j] + 1);
            }
            if(A[J] < A[I]) {
                ddp[I] = max(ddp[I], ddp[J] + 1);
            }
        }
    }

    for(int i = 0; i < N; i++) {
        result = max(result, idp[i] + ddp[i] - 1);
    }

    cout << result << "\n";

    return 0;
}