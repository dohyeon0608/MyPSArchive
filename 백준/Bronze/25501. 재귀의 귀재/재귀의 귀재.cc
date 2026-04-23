#include <iostream>
#include <string>

int arr[2];

int *recursion(const std::string& s, int l, int r, int call) {
    if(l >= r) {
        arr[0] = 1;
        arr[1] = call;
        return arr;
    }
    else if(s[l] != s[r]) {
        arr[0] = 0;
        arr[1] = call;
        return arr;
    }
    else return recursion(s, l+1, r-1, call+1);
}

int *isPalindrome(const std::string& s) {
    return recursion(s, 0, s.length()-1, 1);
}

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    std::string S;

    std::cin >> T;

    while(T-- > 0) {
        std::cin >> S;
        int *result;
        result = isPalindrome(S);
        std::cout << *(result) << " " << *(result+1) << "\n";
    }

    return 0;
}