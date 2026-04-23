#include <iostream>
#include <string>

using namespace std;

int main() {
    string s[3];
    int n;
    int index;
    
    // 세 문자열이 연속으로 숫자가 아닌 경우는 존재하지 않음 -> 적어도 하나는 숫자임
    for(int i = 0; i < 3; i++) {
        cin >> s[i];
        if(isdigit(s[i][0])) {
            n = stoi(s[i]);
            index = i;
        }
    }
    
    int result = n + (3 - index);
    if(result % 3 == 0) {
        cout << "Fizz";
    }
    if(result % 5 == 0) {
        cout << "Buzz";
    }
    if(result % 3 != 0 && result % 5 != 0) {
        cout << result;
    }
    cout << "\n";

    return 0;
}