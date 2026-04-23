#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Graph {
public:
    vector<vector<int>> nodes;
    bool* visited;

    void addNode(int t, int k) {
        nodes[t].push_back(k);
    }

    vector<int> getNodes(int t) {
        return nodes[t];
    }

    void sortNodes() {
        for (int i = 0; i < nodes.size(); i++) {
            sort(nodes[i].begin(), nodes[i].end());
        }
    }

    void clearVisited() {
        for (int i = 0; i < nodes.size(); i++) {
            visited[i] = false;
        }
    }

    Graph(int number) : nodes(number) {
        visited = new bool[number];
        for (int i = 0; i < number; i++) {
            visited[i] = false;
        }
    }

    ~Graph() {
        delete[] visited;
    }
};

void dfs(Graph& g, int x) {
    cout << x << " ";
    vector<int> nodes = g.getNodes(x);
    for (auto i : nodes) {
        if (!g.visited[i]) {
            g.visited[i] = true;
            dfs(g, i);
        }
    }
}

void bfs(Graph& g, int x) {
    queue<int> visitList;
    visitList.push(x);
    while (!visitList.empty()) {
        int u = visitList.front();
        cout << u << " ";
        visitList.pop();
        for (auto v : g.getNodes(u)) {
            if (!g.visited[v]) {
                visitList.push(v);
                g.visited[v] = true;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    Graph graph(N+1);

    int x, y;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        graph.addNode(x, y);
        graph.addNode(y, x);
    }

    graph.sortNodes();
    
    graph.visited[V] = true;
    dfs(graph, V);
    cout << "\n";

    graph.clearVisited();
    graph.visited[V] = true;
    bfs(graph, V);

    return 0;
}