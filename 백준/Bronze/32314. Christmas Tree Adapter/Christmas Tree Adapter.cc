#include <iostream>

using namespace std;

int main() {
    int W, V, A;
    cin >> A >> W >> V;
    // A' == W/V
    // A' >= A = W/V >= A
    cout << (W >= A*V);

    return 0;
}