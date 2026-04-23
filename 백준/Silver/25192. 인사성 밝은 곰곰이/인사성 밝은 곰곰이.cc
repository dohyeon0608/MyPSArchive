#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    string x;
    set<string> users;
    
    int result = 0;
    
    while(N-- > 0) {
        cin >> x;
        if(x == "ENTER") {
            users.clear();
        } else {
            if(users.insert(x).second) result++;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}