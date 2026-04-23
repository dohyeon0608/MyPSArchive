#include <iostream>

using namespace std;

int main() {
    char x[51];
    cin >> x;
    
    int N;
    int start = 0, end = 0;
    int length;
    for(int i = 1; i < 51; i++) {
        if(x[i] == 'X' && x[i-1] == '.') start = i;
        if((x[i] == '.' || x[i] == '\0') && x[i-1] == 'X') { // 계산
            length = i - start;
            if(length % 2 == 1) {
                cout << -1 << "\n";
                return 0;
            }
            while(length > 0) {
                if(length >= 4) {
                    for(int i = 0; i < 4; i++) {
                        x[start++] = 'A';
                    }
                    length -= 4;
                } else {
                    for(int i = 0; i < 2; i++) {
                        x[start++] = 'B';
                    }
                    length -= 2;
                }
            }
        }
        if(x[i] == '\0') break;
    }
    
    cout << x << "\n";

    return 0;
}