#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> ranks;
    int P = players.size();
    
    // 각 플레이어별 순위 구하기
    for(int i = 0; i < P; i++) {
        string p = players[i];
        ranks[p] = i;
    }
    
    vector<string> answer = players;
    
    // 불린 사람 추월 처리
    for(string c : callings) {
        // 불린 사람 등수
        int idx = ranks[c];
        
        // 추월당한 사람
        string f = answer[idx-1];
        
        // 먼저 현재 벡터에서 두 사람을 교체
        swap(answer[idx-1], answer[idx]);
        
        // 맵에도 반영
        ranks[f]++;
        ranks[c]--;
    }
    
    return answer;
}