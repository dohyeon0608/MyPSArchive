#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;
    
    double M = (B - A) / 400.0;
    double result = 1.0 / (1 + pow(10, M));
    
    cout << result << "\n";
    return 0;
}