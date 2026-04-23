#include <bits/stdc++.h>
#define MAX_N 100

using namespace std;

char picture[MAX_N+1][MAX_N+1];
bool visited[2][MAX_N][MAX_N] = {false};
int N;

class Node {
	public:

	int x;
	int y;
	bool weaked;

	bool isValid() {
		return (x >= 0) && (x < N) && (y >= 0) && (y < N);
	}

	bool isVisited() {
		return visited[weaked][x][y];
	}

	char getColor() {
		return picture[x][y];
	}

	void visit() {
		visited[weaked][x][y] = true;
	}

	Node(int x, int y, bool weaked) : x(x), y(y), weaked(weaked) {
	}
};

bool search_nodes(Node root) {
	if(root.isVisited() || !root.isValid()) {
		return false;
	}

	queue<Node> Q;
	Q.push(root);
	root.visit();

	while(!Q.empty()) {
		root = Q.front();
		Q.pop();

		Node hubos[4] = {
			Node(root.x - 1, root.y, root.weaked), 
			Node(root.x, root.y - 1, root.weaked), 
			Node(root.x + 1, root.y, root.weaked), 
			Node(root.x, root.y + 1, root.weaked)
		};

		for(Node hubo : hubos) {
			if(
				(root.getColor() == hubo.getColor() ||
				(root.weaked && root.getColor() != 'B' && hubo.getColor() != 'B'))
				&& hubo.isValid() && !hubo.isVisited()
			) {
				Q.push(hubo);
				hubo.visit();
			}
		}
	}

	return true;
}

int main(void) {
	
	scanf("%d", &N);

	for(int i = 0; i < N; i++) {
		scanf("%s", &picture[i]);
	}

	Node node = Node(0, 0, false);
	int nonweaked_count = 0, weaked_count = 0;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(search_nodes(Node(i, j, false))) nonweaked_count++;
			if(search_nodes(Node(i, j, true))) weaked_count++;
		}
	}

	printf("%d %d", nonweaked_count, weaked_count);

	return 0;
}