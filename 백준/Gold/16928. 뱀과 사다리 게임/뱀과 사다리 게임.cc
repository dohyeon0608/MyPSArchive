#include <iostream>
#include <queue>

using namespace std;

struct State {
	int pos;
	int cost;
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool visited[101] = {false};
	int warp[101] = {0};

	int N, M;
	cin >> N >> M;
	
	int x, y;
	for(int i = 0; i < M+N; i++) {
		cin >> x >> y;
		warp[x] = y;
	}

	queue<State> Q;
	Q.push(State{1, 0});
	visited[1] = true;

	// BFS
	while(!Q.empty()) {
		State s = Q.front();
		Q.pop();

		if(s.pos == 100) {
			cout << s.cost;
			break;
		}

		for(int i = 1; i <= 6; i++) {
			int hubo = s.pos + i;
			if(warp[hubo] != 0) {
				hubo = warp[hubo];
			}
			if(hubo > 100 || visited[hubo]) {
				continue;
			}
			visited[hubo] = true;
			Q.push(State{hubo, s.cost + 1});
		}
	}

	return 0;
}