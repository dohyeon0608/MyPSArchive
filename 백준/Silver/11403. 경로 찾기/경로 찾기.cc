#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool result[100][100] = {false};

// dfs
void dfs(const vector<vector<int>> &nodes, vector<int> &roots, int n) {
    for(auto node : nodes[n]) {
        // 더 진행할 수 있는지 체크
        bool blocked = true;

        // 각 루트에 대해 추가
        for(auto root : roots) {
            if(result[root][node]) continue; // 이미 뿌리가 해당 노드가 방문한 경우
            blocked = false; // 하나라도 진행할 수 있다면 막힘 해제
            result[root][node] = true;
        }

        if(blocked) continue;
        
        // 막히지 않았다면 다음 노드로 이동
        roots.push_back(node);
        dfs(nodes, roots, node);
        roots.pop_back();
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 입력 & 선언부

    int N;
    cin >> N;
    
    vector<vector<int>> nodes(N);
    bool x;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> x;
            if(x) nodes[i].push_back(j);
        }
    }

    // 실행부
    for(int i = 0; i < N; i++) {
        vector<int> v = {i};
        dfs(nodes, v, i);
    }

    // 출력부
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}