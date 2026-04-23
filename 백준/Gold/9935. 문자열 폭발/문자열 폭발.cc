#include <iostream>
#include <string>

using namespace std;

// 문자열 앞쪽에 bomb 포함 여부 반환
bool isContainBomb(char* s, string &t, int &tSize, int &top) {
    for(int i = 0; i < tSize; i++) {
        if(s[top-1-i] != t[tSize-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string S, bomb;
    cin >> S >> bomb;
    
    char result[1000001];
    int top = 0;
    int bombSize = bomb.size();
    
    for(int i = 0; i < S.size(); i++) {
        result[top++] = S[i];
        if((top >= bombSize)) {
            // 폭탄 다 터뜨리기
            while(isContainBomb(result, bomb, bombSize, top)) top -= bombSize;
        }
    }
    result[top] = '\0';
    
    if(result[0] == '\0') {
        cout << "FRULA\n";
    } else {
        cout << result << "\n";
    }
    
    return 0;
}