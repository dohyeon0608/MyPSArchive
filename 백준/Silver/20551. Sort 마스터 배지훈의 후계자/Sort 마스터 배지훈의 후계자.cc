#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> A(N);

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	map<int, int> indexes;

	for(int i = 0; i < N; i++) {
		int a = A[i];
		if(indexes[a] == 0)
			indexes[a] = i + 1;
	}

	int d;
	for(int i = 0; i < M; i++) {
		cin >> d;
		int result = indexes[d];
		cout << result - 1 << "\n";
	}

    return 0;
}