#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int min_blocks = 1;
    int sum = 0;
    
    for(int i = 1;; i++) {
        sum += min_blocks;
        if(N < sum) {
            cout << i-1 << "\n";
            break;
        }
        min_blocks = min_blocks + 4 * i;
    }

    return 0;
}