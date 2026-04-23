#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, K;
    queue<int> Q;
    int i, t;

    cin >> N >> K;

    for(i = 1; i <= N; i++) {
        Q.push(i);
    }

    cout << "<";

    while(!Q.empty()) {
        for(i = 1; i < K; i++) {
            t = Q.front();
            Q.pop();
            Q.push(t);
        }
        cout << Q.front();
        Q.pop();
        if(Q.size() > 0)
            cout << ", ";
    }

    cout << ">";
    
    return 0;
}