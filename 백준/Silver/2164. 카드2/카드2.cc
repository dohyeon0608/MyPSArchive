#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::queue<int> cards;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        cards.push(i+1);
    }

    while (true) {
        if (cards.size() == 1) break;
        if (!cards.empty()) cards.pop();

        if (cards.size() == 1) break;
        int card = cards.front();
        if (!cards.empty()) cards.pop();
        cards.push(card);
    }

    std::cout << cards.front() << "\n";

    return 0;
}