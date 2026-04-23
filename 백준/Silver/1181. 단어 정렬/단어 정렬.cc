#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool compare(std::string a, std::string b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    }
    else {
        int l = a.length();
        for (int i = 0; i < l; i++) {
            if (a.at(i) != b.at(i)) {
                return a.at(i) < b.at(i);
            }
        }
        return false;
    }
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::string> dic(N);
    std::string word;
    for (int i = 0; i < N; i++) {
        std::cin >> word;
        dic[i] = word;
    }

    std::sort(dic.begin(), dic.end(), compare);

    for (int i = 0; i < N; i++) {
        if (i > 0 && dic[i - 1] == dic[i]) continue;
        std::cout << dic[i] << "\n";
    }

    return 0;
}