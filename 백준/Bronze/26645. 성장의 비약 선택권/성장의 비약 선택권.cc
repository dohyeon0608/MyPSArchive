#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    
    int use[4] = {
        max(0, min(210 - N, 8)),
        max(0, min(220 - N, 4)),
        max(0, min(230 - N, 2)),
        1
    };
    
    int max_v = use[0];
    int result = 1;
    
    for(int i = 1; i < 4; i++) {
        if(use[i] >= max_v) {
            result = i + 1;
            max_v = use[i];
        }
    }
    
    cout << result;
    
    return 0;
}