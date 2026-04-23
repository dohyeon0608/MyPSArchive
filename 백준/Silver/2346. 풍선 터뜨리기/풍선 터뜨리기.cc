#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin >> N;
    std::deque<int> ballons;
    std::vector<int> papers(N);
    std::vector<int> result;

    int ballon;
    int paper;
    
    for (int i = 0; i < N; i++) {
        std::cin >> paper;
        papers[i] = paper;
        ballons.push_back(i+1);
    }

    ballon = ballons.front();
    ballons.pop_front();
    result.push_back(1);

    while (!ballons.empty()) {
        paper = papers[ballon - 1];
        if (paper > 0) {
            while (true) {
                ballon = ballons.front();
                ballons.pop_front();
                if (--paper == 0) {
                    result.push_back(ballon);
                    break;
                }
                else {
                    ballons.push_back(ballon);
                }
            }
        }
        else {
            while (true) {
                ballon = ballons.back();
                ballons.pop_back();
                if (++paper == 0) {
                    result.push_back(ballon);
                    break;
                }
                else {
                    ballons.push_front(ballon);
                }
            }
        }
    }

    for (auto i : result) {
        std::cout << i << " ";
    }

    return 0;
}