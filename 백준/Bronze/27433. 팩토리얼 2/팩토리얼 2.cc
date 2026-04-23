#include <iostream>

using namespace std;

int main() {
    long long result = 1;
    int n;
    cin >> n;
    
    while(n > 0) result *= n--; 
    
    cout << result << "\n";

    return 0;
}