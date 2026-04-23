#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int nA, nB;
    cin >> nA >> nB;
    
    map<int, short> U;
    int buffer;
    
    for(int i = 0; i < nA + nB; i++) {
        cin >> buffer;
        U[buffer] += 1;
    }
    
    int result = 0;
    
    for(auto i : U) {
        if(i.second == 1) result++;
    }
    
    cout << result << "\n";
    
    return 0;
}