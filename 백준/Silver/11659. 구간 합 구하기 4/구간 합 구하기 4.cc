#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;
    int a[N];
    int S[N];
    int x;
    for(int i = 0; i < N; i++) {
        std::cin >> x;
        a[i] = x;
        if(i > 0) { 
            S[i] = S[i-1] + x;
        } else S[0] = x;
    }
    int i, j;
    for(int k = 0; k < M; k++) {
        std::cin >> i >> j;
        if(i == 1) std::cout << S[j-1]<< "\n";
        else std::cout << S[j-1] - S[i-2] << "\n";
    }
    return 0;
}