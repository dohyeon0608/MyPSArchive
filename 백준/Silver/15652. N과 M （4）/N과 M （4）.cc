#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> intlist_t;
int N, M;

void nCases(intlist_t A, int stack){
    if(stack == M) {
        for(auto i : A) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        for(int i = 1; i <= N; i++) {
            if(stack > 0 && A[stack-1] > i) continue;
            A[stack] = i;
            nCases(A, stack+1);
        }
    }
}

int main() {
    std::cin >> N >> M;

    nCases(intlist_t(M), 0);

    return 0;
}