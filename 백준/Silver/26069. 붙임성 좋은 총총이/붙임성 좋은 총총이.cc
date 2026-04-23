#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, bool> dance;
    int result = 1;
    
    string a, b;
    dance["ChongChong"] = true;
    
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        if(dance[a] || dance[b]) {
            result += 2 - dance[a] - dance[b];
            dance[a] = dance[b] = true;
        }
    }
    
    cout << result << "\n";

    return 0;
}