#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    int N;
    while(T-- > 0) {
        cin >> N;
        int result = 0;
        int a, b, c;
        for(int i = 0; i < N; i++) {
            cin >> a >> b >> c;
            result += max(0, max(a, max(b, c)));
        }
        cout << result << "\n";
    }

    return 0;
}