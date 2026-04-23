#include <stdio.h>
#include <vector>

using namespace std;

/*
최악의 경우 계산

M = N = 500이고, B가 무수히 크고, map에 0과 256이 하나라도 포함된 경우:
0부터 256까지 H를 확인함.

한 번 확인 시 모든 맵을 탐색하므로
256 * (500 * 500) = 64,000,000
*/

typedef struct {
	int T; // 소요 시간 = 2G + L
	int H; // 높이
} CaseResult;

CaseResult case_analyze(vector<vector<int>> map, int &N, int &M, int &B, int &H) {
	CaseResult result = {0, H};
	int diff;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if(map[i][j] > H) {
				diff = map[i][j] - H;
				result.T += 2 * diff;
			}
			if(map[i][j] < H) {
				diff = H - map[i][j];
				result.T += diff;
			}
		}
	}

	return result;
}

int main(void) {
	int N, M, B;
	scanf("%d %d %d", &N, &M, &B);

	vector<vector<int>> map(N);
	int S = 0;
	int min_h = 256, max_h = 0;

	for(int i = 0; i < N; i++) {
		map[i].resize(M);
		for(int j = 0; j < M; j++) {
			scanf("%d", &map[i][j]);
			int h = map[i][j];
			if(h < min_h) min_h = h;
			if(h > max_h) max_h = h;
			S += h;
		}
	}

	max_h = min(max_h, (S+B)/(M*N));

	CaseResult result;
	result.T = -1;

	for(int h = min_h; h <= max_h; h++) {
		CaseResult caseRes = case_analyze(map, N, M, B, h);

		if(result.T == -1 || caseRes.T <= result.T) { // 가장 높은 높이를 출력
			result = caseRes;
		}
	}

	printf("%d %d", result.T, result.H);

    return 0;
}