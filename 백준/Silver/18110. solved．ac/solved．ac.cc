#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    if(n == 0) {
        cout << 0 << "\n";
        return 0;
    }
    
    vector<int> dfc;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        dfc.push_back(x);
    }
    
    sort(dfc.begin(), dfc.end());
    
    int start = round(n * 0.15);
    int end = n-1 - round(n * 0.15);
    
    int sum = 0;
    for(int i = start; i <= end; i++) {
        sum += dfc[i];
    }
    
    cout << round(sum / (double)(end - start + 1)) << "\n";
    
    return 0;
}