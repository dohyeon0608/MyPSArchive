#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int w, h, p, q, t;
    cin >> w >> h;
    cin >> p >> q;
    cin >> t;
    
    int t_p = (p + t) % (2 * w);
    int t_q = (q + t) % (2 * h);
    
    cout << -abs(t_p - w) + w << " ";
    cout << -abs(t_q - h) + h << "\n";
    
    return 0;
}