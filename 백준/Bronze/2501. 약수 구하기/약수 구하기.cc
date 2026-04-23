#include <iostream>

using namespace std;

int main() {
    int p, q;
    cin >> p >> q;

    int count = 0, k;

    for(k = 1; k <= p; k++) {
        if(p % k == 0) {
            if( q == ++count ) {
                break;
            }
        }
    }

    if(q <= count) {
        cout << k << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}