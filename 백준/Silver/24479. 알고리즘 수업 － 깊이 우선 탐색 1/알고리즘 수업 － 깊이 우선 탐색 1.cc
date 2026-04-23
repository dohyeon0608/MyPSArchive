#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Graph = vector<vector<int>>;

int N, M, R;

// 방문 순서
int visited[100001] = {0};
// 방문 순서 카운터 (방문할 때 마다 +1)
int counter = 1;

void dfs(Graph &e, int R) {
    visited[R] = counter++;
    for(auto x : e[R]) {
        if(!visited[x]) {
            dfs(e, x);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M >> R;
    // 그래프 선언
    Graph graph(N+1);

    int n1, n2;
    // 그래프 간선 입력
    for(int i = 0; i < M; i++) {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    // 정렬
    for(int i = 0; i < N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    // 탐색
    dfs(graph, R);
    
    // 결과
    for(int i = 1; i <= N; i++) {
        cout << visited[i] << "\n";
    }

    return 0;
}