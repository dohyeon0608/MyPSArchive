#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N;

	while(cin >> N) {
		int prev, cur;
		cin >> prev;

		if(N == 1) {
			cout << "Jolly\n";
			continue;
		}

		bool visited[N] = {true, false,}; // 0일 때 고려 안함...
		bool isJolly = true;

		for(int i = 0; i < N-1; i++) {
			cin >> cur;
			int diff = abs(cur - prev);
			if(diff >= N) isJolly = false;
			else { 
				if(visited[diff]) isJolly = false; 
				visited[diff] = true;
			}
			prev = cur; // 이걸 빠뜨리다니 바보인가
		}

		if(isJolly) {
			cout << "Jolly\n";
		} else {
			cout << "Not jolly\n";
		}
	}

    return 0;
}