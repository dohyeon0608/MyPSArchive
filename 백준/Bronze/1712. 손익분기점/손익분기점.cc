#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int result;
    
    if(C - B <= 0) {
        result = -1;
    } else {
        result = A / (C - B) + 1;
    }
    
    cout << result << "\n";

    return 0;
}