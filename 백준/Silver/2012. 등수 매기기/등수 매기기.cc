#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> pred;
    int x;
    
    long long int result = 0; // int -> long long으로 수정
    
    for(int i = 0; i < n; i++) {
        cin >> x;
        pred.push_back(x);
    }
    
    sort(pred.begin(), pred.end());
    
    for(int i = 0; i < n; i++) {
        result += abs(pred[i] - (i+1));
    }
    
    cout << result << "\n";

    return 0;
}