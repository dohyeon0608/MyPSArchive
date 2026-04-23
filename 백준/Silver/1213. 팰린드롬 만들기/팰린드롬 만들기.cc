#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string S;
    // 문자 개수
    int char_count[26] = {0};
    
    cin >> S;
    for(auto c : S) {
        char_count[c - 'A']++;
    }
    
    // 가능한지 판단
    // 모두 짝수번 or 하나만 홀수번
    char mid_char = -1;
    for(int i = 0; i < 26; i++) {
        if(char_count[i] % 2 == 1) {
            if(mid_char != -1) {
                cout << "I'm Sorry Hansoo\n";
                return 0;
            } else {
                mid_char = i;
            }
        }
    }
    
    string result = "";
    // 사전순이므로 앞서는 것부터 열기
    for(int i = 0; i < 26; i++) {
        int count = char_count[i];
        for(int j = 0; j < count/2; j++) {
            result += i + 'A';
        }
    }
    // 가운데 문자 삽입
    if(mid_char != -1) result += mid_char + 'A';
    // 반대 순서로 닫기
    for(int i = 25; i >= 0; i--) {
        int count = char_count[i];
        for(int j = 0; j < count/2; j++) {
            result += i + 'A';
        }
    }
    
    cout << result;
    
    return 0;
}