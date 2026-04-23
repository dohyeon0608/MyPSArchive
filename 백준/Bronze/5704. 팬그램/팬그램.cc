#include <iostream>

using namespace std;

bool is_pangram(string x) {
    bool is_used[26] = {false};
    int result = 0;
    
    for(auto c : x) {
        if(c == ' ') continue;
        if(!is_used[c - 'a']) {
            is_used[c - 'a'] = true;
            result++;
        }
    }
    
    return result == 26;
}

int main(void) {
    string x;
    while(true) {
        getline(cin, x);
        if(x.empty()) continue;
        if(x == "*") break;
        cout << (is_pangram(x)? "Y" : "N") << "\n";
    }
    return 0;
}