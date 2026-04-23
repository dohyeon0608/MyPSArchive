#include <iostream>
#include <cmath>
#define ll long long
#define ld long double

using namespace std;

int solve(ll a, ll b, int step, ll size, int &L, ld& p, ld& q) {
	int xth, yth;
	ll new_size = size / 3;

	// 몇 구역에 있는지 확인
	if (a <= p && p <= a + new_size) {
		xth = 0;
	}
	else if (a + new_size < p && p < a + 2 * new_size) {
		xth = 1;
	}
	else if (a + 2 * new_size <= p && p <= a + size) {
		xth = 2;
	}
	else {
		xth = -1;
	}

	if (b <= q && q <= b + new_size) {
		yth = 0;
	}
	else if (b + new_size < q && q < b + 2 * new_size) {
		yth = 1;
	}
	else if (b + 2 * new_size <= q && q <= b + size) {
		yth = 2;
	}
	else {
		yth = -1;
	}

	// 범위 밖
	if (xth == -1 || yth == -1) {
		return 0;
	}

	// 만약 현재 단계가 L단계라면
	if (step == L) {
		return 1;
	}

	// 다음 단계로
	if (xth == 1 && yth == 1) {
		return 0;
	}

	return solve(a + xth * new_size, b + yth * new_size, step + 1, new_size, L, p, q);
	
}

int main(void) {
    // 빠른 입출력 추가
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	ll a, b;
	int L, k;
	ld p, q; // long double이라는 자료형이 있었구나!

	while (T-- > 0) {
		cin >> a >> b >> L >> k >> p >> q;

		cout << solve(a, b, 0, pow(3, k), L, p, q) << "\n";
	}

	return 0;
}