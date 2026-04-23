#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L, R;
    cin >> N >> L >> R;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin() + (L - 1), A.begin() + R);

    int result = 1;
    for (int i = 1; i < N; i++) {
        if (A[i-1] > A[i]) {
            result = 0;
            break;
        }
    }

    cout << result;

    return 0;
}