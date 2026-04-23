#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    
    vector<int> result(n);
    for(int i = 0; i < n; i++) {
        int res;
        result[i] = res = arr1[i] | arr2[i];
        answer[i] = "";
        
        for(int j = 0; j < n; j++) {
            if((res & 1) == 0) {
                answer[i].insert(0, " ");
            } else {
                answer[i].insert(0, "#");
            }
            res >>= 1;
        }
    }
    
    return answer;
}