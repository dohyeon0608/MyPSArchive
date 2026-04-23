#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::queue<int> people;
    int N, M;

    std::cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        people.push(i);
    }

    int person;
    std::cout << "<";
    while (!people.empty()) {
        for (int i = 0; i < M; i++) {
            person = people.front();
            if (!people.empty()) people.pop();
            if (i != M - 1) people.push(person);
            else {
                std::cout << person;
                if (!people.empty()) std::cout << ", ";
            }
        }
    }

    std::cout << ">";

    return 0;
}