#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;

    std::vector<int> v(N);
    for(int i = 0; i < N; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    for(int i : v) {
        std::cout << i << "\n";
    }

    return 0;
}