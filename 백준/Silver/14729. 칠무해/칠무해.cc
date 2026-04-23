#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);

	vector<double> scores(N);

	for(int i = 0; i < N; i++) {
		scanf("%lf", &scores[i]);
	}

	sort(scores.begin(), scores.end());

	for(int i = 0; i < 7; i++) {
		printf("%.3f\n", scores[i]);
	}

    return 0;
}