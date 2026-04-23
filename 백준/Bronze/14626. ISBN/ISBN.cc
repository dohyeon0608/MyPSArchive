#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;

    int sum = 0; // * 제외 모듈러 합
    int a; // a의 계수
    int m = s[12] - '0'; // 체크기호
    
    for(int i = 0; i < 12; i++) {
        if(s[i] != '*') {
            sum += (1 + 2 * (i%2)) * (s[i] - '0');
            sum %= 10;
        } 
        else a = 1 + 2 * (i%2);
    }
    
    for(int x = 0; x < 10; x++) {
        if((10 - (a*x+sum)%10) % 10 == m) {
            cout << x << "\n";
            break;
        }
    }
    
    return 0;
}