#include <iostream>
#include <vector>
#include <map>

int main() {
    int A = 0;
    int N;
    int size = 0;
    std::cin >> N;
    std::map<int, bool> exist;
    exist.insert(std::pair<int, bool>(0, true));
    for (int i = 1; i <= N; i++) {
        int nA = A - i;
        bool isExist;
        if (exist.find(nA) == exist.end()) isExist = false;
        else isExist = exist.at(nA);
        if (nA < 0 || isExist) nA = A + i;
        exist.insert(std::pair<int, bool>(nA, true));
        A = nA;
    }

    std::cout << A << "\n";

    return 0;
}