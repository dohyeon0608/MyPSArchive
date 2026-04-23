#include <iostream>
#include <vector>
#include <queue>
#define NONE 65535

using namespace std;

struct Point {
	int x;
	int y;
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 최대 길이: 약 45000 언저리 -> unsigned int, int로 하면 segmentation fault
	unsigned short distances[1000][1000];
	fill(distances[0], distances[0] + 1000*1000, NONE);

	int n, m;
	cin >> n >> m;

	Point target;
	int land;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> land;
			if(land == 2) target = Point{i, j};
			else if(land == 0) distances[i][j] = 0;
		}
	}

	queue<Point> Q;
	distances[target.x][target.y] = 0;
	Q.push(target);

	while(!Q.empty()) {
		Point p = Q.front();
		Q.pop();

		Point hubos[4] = {
			Point{p.x - 1, p.y},
			Point{p.x + 1, p.y},
			Point{p.x, p.y - 1},
			Point{p.x, p.y + 1}
		};

		for(auto hubo : hubos) {
			if(hubo.x < 0 || hubo.x > n-1 || hubo.y < 0 || hubo.y > m-1) continue;
			if(distances[hubo.x][hubo.y] != NONE) continue;
			distances[hubo.x][hubo.y] = distances[p.x][p.y] + 1;
			Q.push(hubo);
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(distances[i][j] == NONE) {
				cout << -1 << " ";
			} else {
				cout << distances[i][j] << " ";
			}
			
		}
		cout << "\n";
	}

	return 0;
}