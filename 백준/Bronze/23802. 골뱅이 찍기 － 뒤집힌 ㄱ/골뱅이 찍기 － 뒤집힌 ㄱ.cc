#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    for(int i = 0; i < N * 5; i++) {
        for(int j = 0; j < N * 5; j++) {
            if(j >= N && i >= N) break;
            cout << "@";
        }
        cout << "\n";
    }
    return 0;
}