#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    while(true) {
        cin >> a >> b >> c;
        
        if(a == b && b == c && a == 0) {
            break;
        }
        
        int max = (a > b)? ((a > c)? a : c) : ((b > c)? b : c);
    
        if(max >= (a+b+c)-max) {
            cout << "Invalid\n";
        } else {
            if(a == b && b == c) {
                cout << "Equilateral\n";
            } else if(a != b && b != c && c != a) {
                cout << "Scalene\n";
            } else {
                cout << "Isosceles\n";
            }
        }
    }

    return 0;
}