#include <iostream>

using namespace std;

int euclidean(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    return euclidean(b, r);
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D; // A/B + C/D
    
    int bunmo = (B * D) / ((B > D)? euclidean(B, D) : euclidean(D, B));
    int bunja = A * (bunmo / B) + C * (bunmo / D);
    
    int yakbun = (bunja > bunmo)? euclidean(bunja, bunmo) : euclidean(bunmo, bunja);
    bunja /= yakbun; bunmo /= yakbun;
    
    cout << bunja << " " << bunmo << "\n";

    return 0;
}