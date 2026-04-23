#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> distances;
    int x;
    for(int i = 0; i < N-1; i++) {
        cin >> x;
        distances.push_back(x);
    }
    
    long long result =  0;
    int minPrice = -1;
    for(int i = 0; i < N; i++) {
        cin >> x;
        if(minPrice == -1 || minPrice > x) minPrice = x;
        if(i != N-1) result += (long long)minPrice * distances[i];
    }
    
    cout << result << "\n";

    return 0;
}