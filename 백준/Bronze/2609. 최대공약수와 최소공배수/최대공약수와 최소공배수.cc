#include <iostream>

int GY(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    else {
        return GY(b, r);
    }
}

int main() {
    int N, M;
    std::cin >> N >> M;
    int gy = GY(N, M);
    std::cout << gy << "\n";
    std::cout << gy * (N/gy) * (M/gy) << "\n";
    return 0;
}