#include <string>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool isTopOfStr(stack<char> &S, string &top, int step) {
    if(step == top.size()) {
        return true;
    }
    if(S.size() >= top.size() - step && S.top() == *(top.rbegin() + step)) {
        S.pop();
        return isTopOfStr(S, top, step + 1);
    } else {
        for(int i = step - 1; i >= 0; i--) {
            S.push(*(top.rbegin() + i));
        }
        return false;
    }
}

int solution(vector<string> babbling) {
    int answer = 0;
    stack<char> S;
    vector<string> poss = {"aya", "ye", "woo", "ma"};
    
    for(auto bab : babbling) {
        bool res;
        for(auto chr : bab) {
            S.push(chr);
        }
        
        for(int i = 0; i < bab.size(); i++) {
            for(auto pos : poss) {
                while((res = isTopOfStr(S, pos, 0))) {
                }
            }
        }
        if(S.empty()) {answer++;}
        while(!S.empty()) S.pop();
    }
    
    return answer;
}