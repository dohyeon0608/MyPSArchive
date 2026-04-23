/*
두 점이 위치한 원들을 반지름과 두 점 사이의 거리를 이용해 구한 후 공통적으로 포함되어 있는 원을 제외한 개수만을 구한다. (공통 포함 원 -> 진입/이탈 필요 X)
*/

#include <bits/stdc++.h>

using namespace std;

struct Circle {
	int x;
	int y;
	int r;
};

int distance2(int x1, int y1, int x2, int y2) {
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	while(T-- > 0) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;
		Circle circles[n];
		
		// 시작점이 포함된 원 id
		bool start_circles[n] = {false};
		// 도착점이 포함된 원 id
		bool end_circles[n] = {false};

		for(int i = 0; i < n; i++) {
			cin >> circles[i].x >> circles[i].y >> circles[i].r;
		}

		for(int i = 0; i < n; i++) {
			// 시작점 원 비교
			if(distance2(x1, y1, circles[i].x, circles[i].y) <= circles[i].r * circles[i].r) {
				start_circles[i] = true;
			}
			// 도착점 원 비교
			if(distance2(x2, y2, circles[i].x, circles[i].y) <= circles[i].r * circles[i].r) {
				end_circles[i] = true;
			}
		}

		int result = 0;

		// 포함 원 비교 (공통된 원 제외하고 남는 개수가 진입/이탈 횟수)
		for(int i = 0; i < n; i++) {
			if(start_circles[i] ^ end_circles[i]) result++;
		}

		cout << result << "\n";
	}

    return 0;
}