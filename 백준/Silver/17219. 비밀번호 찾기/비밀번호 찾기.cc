#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    map<string, string> pws;
    
    string site, pw;
    for(int i = 0; i < N; i++) {
        cin >> site >> pw;
        pws[site] = pw;
    }
    
    for(int i = 0; i < M; i++) {
        cin >> site;
        cout << pws[site] << "\n";
    }
    return 0;
}