#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, S, P;
    cin >> N >> S >> P;
    
    vector<int> scores;
    
    int x;
    for(int i = 0; i < N; i++) {
        cin >> x;
        scores.push_back(x);
    }
    
    scores.push_back(S);
    sort(scores.begin(), scores.end(), greater<int>());
    
    int rank = 1;
    int dongil = 1;
    int result = -1;
    
    if(N == 0) result = 1;
    
    for(int i = 0; i <= N; i++) {
        if(scores[i] == S || i >= N) {
            if(i < N && scores[i] == scores[i+1]) continue; // 마지막 등수로
            if(i != P) result = rank;
            break;
        }
        if(scores[i] == scores[i+1]) {
            dongil++;
        } else {
            rank += dongil;
            dongil = 1;
        }
    }
    
    cout << result << "\n";

    return 0;
}