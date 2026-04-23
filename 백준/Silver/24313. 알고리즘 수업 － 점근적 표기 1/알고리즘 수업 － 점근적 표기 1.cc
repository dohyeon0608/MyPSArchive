#include <iostream>

int main() {
    int a_1, a_0, c, n_0;

    std::cin >> a_1 >> a_0;
    std::cin >> c;
    std::cin >> n_0;

    bool defined = 0;

    if(a_1 == 0) {
        if(a_0 <= c) defined = 1;
    } else {
        if(a_1 == c && a_0 <= 0) defined = 1;
        if(a_1 < c && (a_1-c)*n_0+a_0 <= 0) defined = 1;
    }

    std::cout << defined << "\n";
    
    return 0;
}