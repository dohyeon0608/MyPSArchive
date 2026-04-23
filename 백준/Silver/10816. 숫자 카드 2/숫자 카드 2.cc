#include <iostream>
#include <map>

using namespace std;

int count(map<int, int>& A, int x) {
    if(A.find(x) == A.end()) {
        A.insert(pair<int, int>(x, 0));
    }
    return A[x];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    cin >> N;
    map<int, int> memo;
    int x;
    for(int i = 0; i < N; i++) {
        cin >> x;
        int c = count(memo, x);
        memo[x] = c + 1;
    }
    int M;
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> x;
        cout << count(memo, x) << " ";
    }
    return 0;
}