#include <iostream>

using namespace std;

int main(void) {
    int N, A, B;
    cin >> N >> A >> B;
    B = (N > B)? N : B;
    
    if(A < B) {
        cout << "Bus";
    } else if(A > B) {
        cout << "Subway";
    } else {
        cout << "Anything";
    }
    return 0;
}