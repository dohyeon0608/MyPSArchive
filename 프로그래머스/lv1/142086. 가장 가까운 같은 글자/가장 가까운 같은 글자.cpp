#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    // 1-base
    map<char, int> pos;
    
    for(int i = 0; i < s.size(); i++) {
        char c = s[i];
        if(pos[c] == 0) {
            answer.push_back(-1);
        } else {
            answer.push_back( (i+1) - pos[c] );
        }
        pos[c] = i + 1;
    }
    
    return answer;
}