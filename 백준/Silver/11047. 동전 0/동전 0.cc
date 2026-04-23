#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, K;
    std::cin >> N >> K;

    int coins[N];
    int i;
    int x;

    int ans = 0;

    for(i = 0; i < N; i++) {
        std::cin >> x;
        coins[i] = x;
    }

    int tmp;
    i--;

    while(K > 0) {
        int unit = coins[i];
        tmp = K / unit;
        ans += tmp;
        K -= tmp * unit;
        i--;
    }

    std::cout << ans << "\n";
}