#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while(T-- > 0) {
        int A;
        cin >> A;
        
        // A의 (A-1)진법은 항상 11이니까 A-1 출력하면 되는거 아닌가?
        cout << A - 1 << "\n";
    }

    return 0;
}