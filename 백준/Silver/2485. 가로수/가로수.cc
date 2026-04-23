#include <iostream>

using namespace std;

int GCD(int A, int B) {
    if(A%B == 0) return B;
    else return GCD(B, A%B);
}

int main(void) {
    int N;
    cin >> N;
    
    int last_pos, pos, d;
    int result = 0;
    int gcd;
    
    for(int i = 0; i < N; i++) {
        cin >> pos;
        
        if(i == 0) {
            last_pos = pos;
        } else {
            d = pos - last_pos;
            result += d;
            
            if(i == 1) {
                gcd = d;
            }
            
            if(gcd > d) gcd = GCD(gcd, d);
            else gcd = GCD(d, gcd);
        }
        
        last_pos = pos;
    }
    
    result = result / gcd - (N - 1);
    
    cout << result << "\n";
    
    return 0;
}