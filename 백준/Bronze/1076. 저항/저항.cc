#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    map<string, int> word_dict = {
        {"black", 0},
        {"brown", 1},
        {"red", 2},
        {"orange", 3},
        {"yellow", 4},
        {"green", 5},
        {"blue", 6},
        {"violet", 7},
        {"grey", 8},
        {"white", 9}
    };
    
    int R = 0;
    string x;
    
    cin >> x;
    R += word_dict[x] * 10;
    cin >> x;
    R += word_dict[x];
    cout << R;
    
    cin >> x;
    if(R != 0) {
        for(int i = 0; i < word_dict[x]; i++) {
            cout << 0;
        }
    }
    
    return 0;
}