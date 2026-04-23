#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int x;
    vector<int> W(10);
    vector<int> K(10);
    
    for(int i = 0; i < 20; i++) {
        cin >> x;
        if(i >= 10) {
            K[i % 10] = x;
        } else {
            W[i % 10] = x;
        }
    }
    
    sort(W.begin(), W.end());
    sort(K.begin(), K.end());
    
    cout << W[7] + W[8] + W[9] << " " << K[7] + K[8] + K[9] << "\n";
    
    return 0;
}