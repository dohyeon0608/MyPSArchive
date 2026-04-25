#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int T;
    int N;

    cin >> T;
    
    while(T-- > 0) {
        cin >> N;

        if(N % 3 != 0) {
            cout << "0\n";
            continue;
        }

        long long result = 1;
        for(int i = 0; i <= N/3 - 1; i++)
            result *= 2;
        cout << result << "\n";
    }

    return 0;
}