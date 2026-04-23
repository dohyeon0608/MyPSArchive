#include <stdio.h>
#include <map>

using namespace std;

// 또 long long이 문제야?

map<long long, long long> A;

long long solve(long long N, int P, int Q) {
	if(A[N] != 0) return A[N];
	A[N] = solve(N/P, P, Q) + solve(N/Q, P, Q);
	return A[N];
}

int main(void) {
	A[0] = 1;

	long long N;
	int P, Q;
	scanf("%lld %d %d", &N, &P, &Q);

	solve(N, P, Q);

	printf("%lld", A[N]);

    return 0;
}