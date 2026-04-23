#include <iostream>
#include <string>

using namespace std;

int char_count[200000][26] = {0};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    cin >> S;
    
    // 최대 시행 횟수 5,200,000회
    for(int i = 0; i < S.size(); i++) {
        if(i == 0) {
            char_count[i][S[i] - 'a'] = 1;
            continue;
        }
        for(int a = 0; a < 26; a++) {
            char_count[i][a] = char_count[i-1][a];
            if(S[i] - 'a' == a) char_count[i][a]++;
        }
    }
    
    int q;
    cin >> q;
    
    char a;
    int l, r;
    int result;
    for(int i = 0; i < q; i++) {
        cin >> a >> l >> r;
        result = char_count[r][a - 'a'];
        if(l > 0) result -= char_count[l-1][a - 'a'];
        cout << result << "\n";
    }
    
    return 0;
}