#include <iostream>

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    int result = 0;
    std::cin >> N >> M;
    int sum = 0;

    int cards[N] = {0};
    for(int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            for(int k = j+1; k < N; k++) {
                sum = cards[i] + cards[j] + cards[k];
                if(M-sum < M-result && sum <= M) {
                    result = sum;
                }
            }
        }
    }

    std::cout << result << "\n";
}