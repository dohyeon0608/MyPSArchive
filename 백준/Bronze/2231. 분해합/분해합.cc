#include <iostream>

int digit_sum(int n) {
    int result = 0;
    while (n > 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    int result = 0; // 분해합이 없는 경우

    std::cin >> N;

    for(int i = N - 923; i < N; i++) {
        if(i + digit_sum(i) == N) {
            result = i;
            break;
        }
    }
    
    std::cout << result << "\n";
}