#include <iostream>

using namespace std;

int main() {
    int S, D, I, L, N;
    cin >> S >> D >> I >> L >> N;
    
    int result = N * 4 - (S + D + I + L);
    if(result < 0) result = 0;
    
    cout << result << "\n";

    return 0;
}