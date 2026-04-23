#include <iostream>
#include <string>

using namespace std;

string patterns[4] = {
	"aaab",
	"dabb",
	"ddcb",
	"dccc"
};

int main(void) {
	int N;
	cin >> N;

	char result[201][201];

	if (N % 4 != 0) {
		cout << -1;
		return 0;
	}

	for (int i = 0; i < N; i += 4) {
		for (int j = 0; j < N; j += 4) {
			for (int x = 0; x < 4; x++) {
				for (int y = 0; y < 4; y++) {
					result[i + x][j + y] = patterns[x][y];
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << result[i][j];
		}
		cout << "\n";
	}
	return 0;
}