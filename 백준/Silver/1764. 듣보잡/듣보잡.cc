#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    string buffer;
    map<string, bool> deudo;
    
    vector<string> result;
    
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        deudo[buffer] = true;
    }
    
    for(int i = 0; i < M; i++) {
        cin >> buffer;
        if(deudo[buffer]) result.push_back(buffer);
    }
    
    int size = result.size();
    cout << size << "\n";
    
    sort(result.begin(), result.end());
    
    for(auto i : result) {
        cout << i << "\n";
    }

    return 0;
}