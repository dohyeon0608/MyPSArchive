#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

/*
이전 코드와의 차이점:
- 각 문자열마다 k값을 올리는 것이 아닌, k값에 따라 각 문자열의 중복 여부 판단
→ 모든 k값을 보는 것이 아니라 필요한 k값만 확인한다!
*/

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> S;
    set<string> dict;

    int N;
    cin >> N;

    unsigned int length = 0;
    int result = 1;
    string x, temp;

    for(int i = 0; i < N; i++) {
        cin >> x;
        S.push_back(x);
        if(length == 0) length = x.length();
    }

    while(true) {
        for(auto s : S) {
            dict.insert(s.substr(length-result));
        }

        if(dict.size() != N)
            result++;
        else
            break;

        dict.clear();
    }

    cout << result << "\n";

    return 0;
}