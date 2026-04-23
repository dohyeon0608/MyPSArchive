#include <iostream>

using namespace std;

int main(void) {
	int A, B;
	cin >> A >> B;

	long long result = 1;
	int cur = 1;

	for(int i = 0; i < B; i++) {
		cur += A - 2;
		result += (long long) cur;
	}

	cout << result << "\n";

    return 0;
}