#include <iostream>

using namespace std;

int F(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return F(n - 2) + F(n - 1);
}

int main() {
    int n;
    cin >> n;
    
    cout << F(n) << "\n";

    return 0;
}