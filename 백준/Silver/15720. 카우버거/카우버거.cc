#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int B, C, D;
    cin >> B >> C >> D;
    
    int min = (B < C)? ((B < D)? B : D ) : ((C < D)? C : D);
    
    vector<int> burgerPrices;
    vector<int> cidePrices;
    vector<int> drinkPrices;
    
    int x;
    
    int before = 0;
    int after = 0;
    
    for(int i = 0; i < B; i++) {
        cin >> x;
        burgerPrices.push_back(x);
        before += x;
    }
    
    for(int i = 0; i < C; i++) {
        cin >> x;
        cidePrices.push_back(x);
        before += x;
    }
    
    for(int i = 0; i < D; i++) {
        cin >> x;
        drinkPrices.push_back(x);
        before += x;
    }
    
    after = before;
    
    
    sort(burgerPrices.begin(), burgerPrices.end());
    sort(cidePrices.begin(), cidePrices.end());
    sort(drinkPrices.begin(), drinkPrices.end());
    
    for(int i = 0; i < min; i++) {
        after -= (burgerPrices[B - i - 1] + cidePrices[C - i - 1] + drinkPrices[D - i - 1]) / 10 * 1;
    }
    
    cout << before << "\n" << after << "\n";

    return 0;
}