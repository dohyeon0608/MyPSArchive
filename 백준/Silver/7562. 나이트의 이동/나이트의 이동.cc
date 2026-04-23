#include <iostream>
#include <queue>

using namespace std;

struct Point {
	int x;
	int y;
};

struct State {
	Point p;
	int cost;
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int l;
	Point S, E;
	int x, y;
	queue<State> Q;
	bool visited[300][300] = { false };

	while (T-- > 0) {
		cin >> l;
		cin >> x >> y;
		S = Point{ x, y };
		cin >> x >> y;
		E = Point{ x, y };

		fill(visited[0], visited[0] + 300 * 300, false);

		Q.push(State{ S, 0 });
		visited[S.x][S.y] = true;

		while (!Q.empty()) {
			State s = Q.front();
			Point p = s.p;
			Q.pop();

			if (p.x == E.x && p.y == E.y) {
				cout << s.cost << "\n";
				while (!Q.empty()) Q.pop(); // 큐 비우기
				break;
			}

			Point hubo[8] = {
				Point{p.x + 2, p.y + 1},
				Point{p.x + 2, p.y - 1},
				Point{p.x - 2, p.y + 1},
				Point{p.x - 2, p.y - 1},
				Point{p.x + 1, p.y + 2},
				Point{p.x + 1, p.y - 2},
				Point{p.x - 1, p.y + 2},
				Point{p.x - 1, p.y - 2}
			};

			for (auto h : hubo) {
				if (h.x < 0 || h.x > l-1 || h.y < 0 || h.y > l-1) {
					continue;
				}
				if (visited[h.x][h.y]) {
					continue;
				}
				visited[h.x][h.y] = true;
				Q.push(State{ h, s.cost + 1 });
			}
			
		}
	}
	return 0;
}