#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    int N;
    
    char A, B;
    int A_win, B_win;
    while(T-- > 0) {
        cin >> N;
        A_win = B_win = 0;
        while(N-- > 0) {
            cin >> A >> B;
            bool flag = (A == 'R' && B == 'S') || (A == 'S' && B == 'P') || (A == 'P' && B == 'R');
            if(A == B) {}
            else if(flag) { A_win++; }
            else { B_win++; }
        }
        if(A_win > B_win) {
            cout << "Player 1\n";
        } else if(A_win < B_win) {
            cout << "Player 2\n";
        } else {
            cout << "TIE\n";
        }
    }
    
    return 0;
}