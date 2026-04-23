#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> rank;
    
    for(int d = 0; d < score.size(); d++) {
        rank.push_back(score[d]);
        sort(rank.begin(), rank.end(), greater<int>());
        answer.push_back( rank[min(k-1, d)] );
    }
    
    return answer;
}