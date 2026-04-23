#include <bits/stdc++.h>

using namespace std;

int listToInt(const vector<int> &list, const int &l, const int &begin) {
	int result = 0;
	int pow10 = 1;

	for(int i = l + begin - 1; i >= begin; i--) {
		result += list[i] * pow10;
		pow10 *= 10;
	}

	return result;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	while(T-- > 0) {
		int N, M;
		cin >> N >> M;

		vector<int> Xs(M);
		vector<int> Ys(M);

		for(int i = 0; i < 2 * M; i++) {
			if(i < M) cin >> Xs[i];
			else cin >> Ys[i - M];
		}

		int X = listToInt(Xs, M, 0);
		int Y = listToInt(Ys, M, 0);

		vector<int> board(N * 2);

		for(int i = 0; i < N; i++) {
			cin >> board[i];
			board[i + N] = board[i];
		}

		int result = 0;

		for(int i = 0; i < N; i++) {
			int Z = listToInt(board, M, i);
			if(X <= Z && Z <= Y) result++;
		}

		cout << result << "\n";

	}

    return 0;
}