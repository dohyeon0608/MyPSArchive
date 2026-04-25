#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    int N, S;

    while(T-- > 0) {
        cin >> N >> S;
        int bestScore = 10000000 + N;

        if(S == bestScore) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}