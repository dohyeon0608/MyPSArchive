#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<int, string> pokemon_names;
    map<string, int> pokemon_no;
    
    int M, N;
    string x;
    
    cin >> M >> N;
    
    for(int i = 1; i <= M; i++) {
        cin >> x;
        pokemon_names[i] = x;
        pokemon_no[x] = i;
    }
    
    for(int i = 1; i <= N; i++) {
        cin >> x;
        
        if(isdigit(x[0])) {
            cout << pokemon_names[stoi(x)] << "\n";
        } else {
            cout << pokemon_no[x] << "\n";
        }
    }

    return 0;
}