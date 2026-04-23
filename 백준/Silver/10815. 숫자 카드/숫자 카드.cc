#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> intlist;

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    int M;
    int temp;

    std::cin >> N;
    intlist cards(N);

    for(int i = 0; i < N; i++) {
        std::cin >> temp;
        cards[i] = temp;
    }

    std::sort(cards.begin(), cards.end());

    std::cin >> M;

    while(M-- > 0) {
        std::cin >> temp;

        int start, end, mid;
        start = 0; end = N-1;

        while(true) {
            mid = (start+end)/2;
            
            if(temp > cards[mid]) {
                start = mid;
            } else {
                end = mid;
            }

            if(temp == cards[start] || temp == cards[end]) {
                std::cout << "1 ";
                break;
            } else if(end - start <= 1) {
                std::cout << "0 ";
                break;
            }
        }
    }

    return 0;
}