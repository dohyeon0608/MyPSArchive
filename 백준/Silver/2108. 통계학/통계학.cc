#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    vector<int> arr;
    map<int, int> count;
    
    int max = 0;
    int sum = 0;
    int x;
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        sum += x;
        arr.push_back(x);
        count[x] += 1;
        if(count[x] > max) max = count[x];
    }
    
    sort(arr.begin(), arr.end());
    
    // 평균
    cout << (int)round((double)sum / N) << "\n";
    
    // 중앙값
    cout << arr[N/2] << "\n";
    
    // 최빈값
    vector<int> cand;
    for(auto i : count) {
        if(i.second == max) cand.push_back(i.first);
    }
    if(cand.size() == 1) {
        cout << cand[0] << "\n";
    } else {
        sort(cand.begin(), cand.end());
        cout << cand[1] << "\n";
    }
    
    // 범위
    cout << arr[N-1] - arr[0] << "\n";
    
    return 0;
}