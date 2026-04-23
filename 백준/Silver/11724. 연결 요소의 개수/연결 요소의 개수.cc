#include <iostream>
#include <vector>

using namespace std;

class Graph {
	public:
	vector<vector<int>> nodes;
	bool visited[1001] = {false};

	vector<int> getNodes(int k) {
		return nodes[k];
	}

	void addNode(int t, int k) {
		nodes[t].push_back(k);
	}

	Graph(int n) : nodes(n) {

	}
};

void dfs(Graph &G, int x) {
	G.visited[x] = true;
	for(auto i : G.getNodes(x)) {
		if(!G.visited[i]) {
			dfs(G, i);
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	Graph graph(N + 1);

	// 입력
	int x, y;
	while(M-- > 0) {
		cin >> x >> y;
		graph.addNode(x, y);
		graph.addNode(y, x);
	}

	// 탐색
	int result = 0;
	for(int r = 1; r <= N; r++) {
		// size가 0일 수도 있음!
		if(!graph.visited[r] && graph.getNodes(r).size() >= 0) {
			dfs(graph, r);
			result++;
		}
	}

	cout << result << "\n";

	return 0;
}