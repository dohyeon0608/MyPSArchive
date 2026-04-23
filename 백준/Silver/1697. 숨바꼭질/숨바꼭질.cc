#include <iostream>
#include <queue>

using namespace std;

struct State {
	int p;
	int cost;
};

int main(void) {
	int N, X;
	cin >> N >> X;

	int result = -1;
	queue<State> Q;
	bool visited[100001] = {false};

	Q.push(State{N, 0});
	visited[N] = true;

	// BFS
	while(!Q.empty()) {
		State s = Q.front();
		Q.pop();

		// 만약 X보다 오른쪽에 있다면 방법은 하나 뿐!
		if(s.p >= X) {
			int cost = s.cost + (s.p - X);
			if(cost < result || result == -1) result = cost;
			continue;
		}

		// 만약 cost가 비싸다면 컷
		if(s.cost > result && result != -1) {
			continue;
		}

		// 다음 목적지
		int hubos[3] = {s.p - 1, s.p + 1, s.p * 2};

		for(auto hubo : hubos) {
			if(hubo < 0 || hubo > 100000) {
				continue;
			}
			if(visited[hubo]) continue;
			visited[hubo] = true;
			Q.push(State{hubo, s.cost + 1});
		}
	}

	cout << result << "\n";

	return 0;
}