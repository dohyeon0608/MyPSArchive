#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int W, H;
	cin >> W >> H;

	int N;
	cin >> N;

	int result = 0;

	vector<int> crops_x;
	vector<int> crops_y;
	int dir, n;

	crops_x.push_back(0);
	crops_y.push_back(0);

	for(int i = 0; i < N; i++) {
		cin >> dir >> n;
		if(dir == 0) crops_y.push_back(n);
		else crops_x.push_back(n);
	}

	crops_x.push_back(W);
	crops_y.push_back(H);

	sort(crops_x.begin(), crops_x.end());
	sort(crops_y.begin(), crops_y.end());

	int crops_x_size = crops_x.size();
	int crops_y_size = crops_y.size();

	for(int i = 1; i < crops_x_size; i++) {
		for(int j = 1; j < crops_y_size; j++) {
			int area = (crops_x[i] - crops_x[i-1]) * (crops_y[j] - crops_y[j-1]);
			if(area > result) result = area;
		}
	}

	cout << result;

    return 0;
}