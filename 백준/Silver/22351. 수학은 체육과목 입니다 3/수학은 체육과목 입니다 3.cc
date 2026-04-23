#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string S;
	cin >> S;

	int S_size = S.size();

	int digit = 1;
	int index;
	int A, B;
	bool success;

	while(digit <= S_size) {
		A = stoi(S.substr(0, digit));
		index = 0;
		success = true;
		B = A;

		while(true) {
			index += (int) log10(B++) + 1;

			if(index >= S_size) break;
			string B_str = to_string(B);
			if(B_str != S.substr(index, B_str.size())) {
				success = false;
				break;
			}
		}

		if(success) {
			B--;
			cout << A << " " << B;
			break;
		}

		digit++;
	}

    return 0;
}