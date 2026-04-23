#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    map<string, int> clothesCount;
    string name, type;
    int t, result;
    
    for(int i = 0; i < T; i++) {
        cin >> t;
        clothesCount.clear();
        result = 1;
        
        for(int j = 0; j < t; j++) {
            cin >> name >> type;
            clothesCount[type]++;
        }
        
        for(auto c : clothesCount) {
            result *= c.second + 1;
        }
        
        cout << result - 1 << "\n";
    }

    return 0;
}