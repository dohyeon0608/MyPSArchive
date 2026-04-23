#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sum;
    vector<int> factors;

    while(true) {
        sum = 0;
        factors = vector<int>();

        cin >> n;

        if(n == -1) break;

        for(int k = 1; k < n; k++) {
            if(n % k == 0) {
                sum += k;
                factors.push_back(k);
            }
        }
        if(sum == n) {
            cout << n << " = ";
            for(auto i = factors.begin(); i != factors.end(); i++) {
                cout << *i;
                if(i + 1 != factors.end()) cout << " + ";
            }
        } else {
            cout << n << " is NOT perfect.";
        }
        cout << "\n";
    }

    return 0;
}