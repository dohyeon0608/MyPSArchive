#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    vector<vector<int>> nodes;

    void addNode(int t, int k) {
        nodes[t].push_back(k);
    }

    vector<int> getNodes(int t) {
        return nodes[t];
    }

    Graph(int number) : nodes(number) {
    }
};

int result = 0;
bool visited[101] = { 0 };

void dfs(Graph &g, int x) {
    vector<int> node = g.getNodes(x);
    for (auto i : node) {
        if (!visited[i]) {
            visited[i] = true;
            result++;
            dfs(g, i);
        }
    }
}

int main(void) {
    int N;
    cin >> N;

    Graph graph(N+1);

    int M;
    cin >> M;

    int x, y;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        graph.addNode(x, y);
        graph.addNode(y, x);
    }

    // dfs기법
    visited[1] = true;
    dfs(graph, 1);
    
    cout << result << "\n";

    return 0;
}