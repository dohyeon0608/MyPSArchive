#include <iostream>

using namespace std;

int N;

int dfs(int sum) { // 사실상 백트래킹
    if(sum == N) return 1;
    else if(sum > N) return 0;
    else {
        return dfs(sum + 1) + dfs(sum + 2) + dfs(sum + 3);
    }
}

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        cin >> N;
        int result = dfs(0);
        cout << result << "\n";
    }

    return 0;
}