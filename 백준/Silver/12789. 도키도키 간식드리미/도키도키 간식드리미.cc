#include <iostream>
#include <stack>
#include <deque>

int main() {
    int N;
    std::deque<int> line;
    std::stack<int> exspace;

    int no;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> no;
        line.push_back(no);
    }

    int entr = 1;

    while (true) {
        while (!line.empty()) {
            // for line
            if (line.front() == entr) {
                entr++;
            }
            else {
                exspace.push(line.front());
            }
            line.pop_front();
            // if available
            while (!exspace.empty() && exspace.top() == entr) {
                entr++;
                exspace.pop();
            }
        }
        if (exspace.size() == 0) {
            std::cout << "Nice\n";
            break;
        }
        else {
            std::cout << "Sad\n";
            break;
        }
    }

    return 0;
}