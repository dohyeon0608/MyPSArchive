#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int x = (A << 2) + (B << 1) + C;
    
    if(x == 0b100 || x == 0b011) cout << "A";
    else if(x == 0b010 || x == 0b101) cout << "B";
    else if(x == 0b001 || x == 0b110) cout << "C";
    else cout << "*";

    return 0;
}