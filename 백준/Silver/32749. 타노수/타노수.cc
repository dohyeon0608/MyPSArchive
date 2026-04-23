#include <iostream>
#include <string>

using namespace std;

int N, T;

string mx;
bool is_init = false;

void solve(string& X, int begin, int size, int step) {
	if (step == T) {
		string number = X.substr(begin, size);
		if (!is_init) {
			is_init = true;
			mx = number;
		}
		else {
			if (number > mx) mx = number;
		}
	}
	else {
		int n_size = size >> 1;
		solve(X, begin, n_size, step + 1);
		solve(X, begin + n_size, n_size, step + 1);
	}
}

int main(void) {
	cin >> N >> T;

	string X;
	cin >> X;
	
	solve(X, 0, (1 << N), 0);

	cout << mx;

}