#include <iostream>

int S(int* Sn, int m, int n) {
    if(m == 0) return Sn[n];
    else return Sn[n] - Sn[m-1];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, K;
    std::cin >> N >> K;
    int tmp[N];
    int S_tmp[N];
    int x;
    for(int i = 0; i < N; i++) {
        std::cin >> x;
        tmp[i] = x;
        if(i > 0) { 
            S_tmp[i] = S_tmp[i-1] + x;
        } else S_tmp[0] = x;
    }
    int result = -100 * K;
    int temp = 0;
    for(int i = 0; i < N - K + 1; i++) {
        temp = S(S_tmp, i, i+K-1);
        if(temp > result) result = temp;
    }
    std::cout << result << "\n";
    return 0;
}