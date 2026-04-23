#include <iostream>

using namespace std;

int main(void) {
    int T;
    int V, E;
    cin >> T;
    while(T-- > 0) {
        cin >> V >> E;
        cout << 2 + E - V << "\n";
    }
    return 0;
}