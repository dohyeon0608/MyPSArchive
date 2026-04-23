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
            if(std::find(A.begin(), A.end(), i) != A.end()) { // i가 존재한다면
                continue;
            }
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