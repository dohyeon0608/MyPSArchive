#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    map<string, int> sell_counts;
    string title;
    int max = 0;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> title;
        int t = ++sell_counts[title];
        if(t > max) max = t;
    }

    for(auto itr : sell_counts) {
        if(itr.second == max) {
            cout << itr.first;
            break;
        }
    }

    return 0;
}