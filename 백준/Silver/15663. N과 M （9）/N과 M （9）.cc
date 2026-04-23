#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> numbers(N);

	for(int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	// 중복 검사용 (문자열 기준)
	map<string, bool> isPrinted;
	
	do {
		string result = "";
		for(int i = 0; i < M; i++) {
			result += to_string(numbers[i]);
			result += " ";
		}
		// 중복 검사
		if(!isPrinted[result]) {
			cout << result << "\n";
			isPrinted[result] = true;
		}
	} while (next_permutation(numbers.begin(), numbers.end()));

    return 0;
}