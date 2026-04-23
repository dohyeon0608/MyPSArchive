#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int result = 0;
    
    set<string> substr;
    
    for(int i = 0; i < S.size(); i++) {
        for(int j = i; j < S.size(); j++) {
            substr.insert(S.substr(i, j-i+1));
        }
    }
    
    for(auto i : substr) {
        result++;
    }
    
    cout << result << "\n";

    return 0;
}