#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    int left, right, up, down;
    int x, y;
    
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(i == 0) {
            left = x; right = x; up = y; down = y;
        } else {
            if(x < left) left = x;
            if(x > right) right = x;
            if(y < down) down = y;
            if(y > up) up = y;
        }
    }
    
    cout << (right - left) * (up - down);

    return 0;
}