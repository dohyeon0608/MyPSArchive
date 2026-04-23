#include <stdio.h>
#include <map>

using namespace std;

map<long long, long long> A;

long long solve(long long N, const int P, const int Q, const int X, const int Y) {
	if(N <= 0) return 1;
	if(A[N] != 0) return A[N];
	A[N] = solve(N/P - X, P, Q, X, Y) + solve(N/Q - Y, P, Q, X, Y);
	return A[N];
}

int main(void) {
	A[0] = 1;

	long long N;
	int P, Q, X, Y;
	scanf("%lld %d %d %d %d", &N, &P, &Q, &X, &Y);

	solve(N, P, Q, X, Y);

	printf("%lld", A[N]);

    return 0;
}