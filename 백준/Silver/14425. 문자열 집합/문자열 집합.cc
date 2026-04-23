#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<string> S;
    string x;
    
    int result = 0;
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        S.push_back(x);
    }
    
    // 사전순 나열
    sort(S.begin(), S.end());
    
    int start, end, mid;
    
    for(int i = 0; i < M; i++) {
        cin >> x;
        
        start = 0;
        end = N - 1;
        
        // 이진 탐색
        while(true) {
            mid = (start+end)/2;
            
            if(x > S[mid]) {
                start = mid;
            } else {
                end = mid;
            }

            if(x == S[start] || x == S[end]) {
                result++;
                break;
            } else if(end - start <= 1) {
                break;
            }
        }
        
    }
    
    cout << result << "\n";

    return 0;
}