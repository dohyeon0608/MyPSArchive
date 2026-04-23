#include <iostream>
#define M 10007

using namespace std;

int main(void) {
	// 2*i 직사각형을 채우는 방법
	int dp[1000] = { 1, 2, };
	int n;
	cin >> n;

	for (int i = 2; i < n; i++) {
		// i-2번째에서 = 추가, i-1번째에서 | 추가
		// (||는 후자에서 이미 처리 중!)
		dp[i] = ((dp[i - 2] % M) + (dp[i - 1] % M)) % M;
	}

	cout << dp[n - 1];

	return 0;
}