#include <iostream>

using namespace std;

int N;
int A[11];

int MAX, MIN;
bool is_result_init = false;

void dfs(int p, int m, int t, int d, int step, int val) {
	if (step == N) {
		if(!is_result_init) {
			is_result_init = true;
			MAX = val;
			MIN = val;
		}
		else {
			if (val > MAX) MAX = val;
			if (val < MIN) MIN = val;
		}
	} 
	else {
		if (p > 0) {
			dfs(p - 1, m, t, d, step + 1, val + A[step]);
		}
		if (m > 0) {
			dfs(p, m - 1, t, d, step + 1, val - A[step]);
		}
		if (t > 0) {
			dfs(p, m, t - 1, d, step + 1, val * A[step]);
		}
		if (d > 0) {
			dfs(p, m, t, d - 1, step + 1, val / A[step]);
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	dfs(a, b, c, d, 1, A[0]);

	cout << MAX << "\n" << MIN << "\n";

	return 0;
}