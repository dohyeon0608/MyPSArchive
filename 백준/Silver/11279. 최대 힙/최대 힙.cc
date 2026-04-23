#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int> pq;
	int x;

	int N;
	cin >> N;

	while(N-- > 0) {
		cin >> x;
		if(x != 0) {
			pq.push(x);
		} else {
			int result;
			if(!pq.empty()) {
				result = pq.top();
				pq.pop();
			} else {
				result = 0;
			}
			cout << result << "\n";
		}
	}

	return 0;
}