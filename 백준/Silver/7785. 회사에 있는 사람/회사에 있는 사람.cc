#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    string name, act;
    map<string, bool, greater<string>> log;
    
    for(int i = 0; i < N; i++) {
        cin >> name >> act;
        if(act == "enter") {
            log[name] = true;
        } else {
            log[name] = false;
        }
    }
    
    for(auto i : log) {
        if(i.second) cout << i.first << "\n";
    }
    
    return 0;
}