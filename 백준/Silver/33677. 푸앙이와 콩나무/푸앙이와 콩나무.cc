#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

int min_d = INT32_MAX;
int min_water = INT32_MAX;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	// map<int,int> = <일, 물>
	queue<pair<int, int>> BFS;
	//숫자가 이미 나왔는가 key = length, value = day
	map<int, int> memoN;
	int p_T = 1;
	int T = 0;

	BFS.push(pair<int, int>(0, 0));

	bool flag = true;

	int min_water = INT32_MAX;

	int day = 0;

	while (flag) {
		T = 0;
		for (int i = 0; i < p_T; i++) {
			pair<int, int> n = BFS.front();
			bool doit = true;
			if (n.first > N) {
				// skip
			}
			else if (memoN.find(n.first) != memoN.end()) {
				if (day > memoN[n.first]) doit = false;
			}
			else if (n.first == N) {
				// ok
				flag = false;
				doit = false;
				if (min_water > n.second) {
					min_water = n.second;
				}
			}
			if (doit && flag) {
				int l = n.first;
				int water = n.second;
				memoN.insert(pair<int, int>(n.first, day));
				BFS.push(pair<int, int>(l+1, water+1));
				T++;
				if (n.first > 0 && l <= (N / 3) + 1) {
					BFS.push(pair<int, int>(l*3 , water+3));
					T++;
				}
				if (n.first > 1 && l <= sqrt(N)+1) {
					BFS.push(pair<int, int>(l*l, water+5));
					T++;
				}
			}
			BFS.pop();
		}
		day++;
		p_T = T;
	}
	
	cout << day-1 << " " << min_water << "\n";

	return 0;
}