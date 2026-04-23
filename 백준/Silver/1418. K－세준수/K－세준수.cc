#include <bits/stdc++.h>
#define MAX_N 100000

using namespace std;

bool isPrime[MAX_N+1];
vector<int> primes;

bool Ksejun(int &n, int &K) {
	if(n == 1) return true; // 왜인지는 모르겠으나 일단 맞다고 치자...
	int number = n;
	int result;
	for(int prime : primes) {
		result = prime;
		while(number % prime == 0) {
			number /= prime;
		}
		if(number == 1) break;
	}
	return result <= K;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	fill(isPrime, isPrime + MAX_N + 1, true);
	isPrime[1] = false;

	// '그 체'
	for(int i = 2; i * i <= MAX_N; i++) {
		if(!isPrime[i]) continue;
		primes.push_back(i);
		for(int k = 2 * i; k <= MAX_N; k += i) {
			isPrime[k] = false;
		}
	}

	int N, K;
	cin >> N >> K;

	int result = 0;

	for(int n = 1; n <= N; n++) {
		if(Ksejun(n, K)) result++;
	}

	cout << result;

    return 0;
}