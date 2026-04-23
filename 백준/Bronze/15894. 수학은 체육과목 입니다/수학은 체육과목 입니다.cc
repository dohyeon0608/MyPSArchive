#include <iostream>

using namespace std;

int main() {
    int n, i;
    long long int ans = 0;
    cin >> n;
    for(i = 1; i <= n; i++) {
        ans += (2 * n + 2) - 2 * (n-1);
    }
    cout << ans;

    return 0;
}