#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int max = (a > b)? ((a > c)? a : c) : ((b > c)? b : c);
    int cha = max - ((a+b+c)-max);
    int result = a + b + c - ((cha < 0)? 0 : cha+1);
    
    cout << result;
    
    return 0;
}