#include <bits/stdc++.h>

using namespace std;

int N, M;
set<int> numbers;
vector<int> print;

void solve(const int S, int last_n, int depth) {
    if(depth == M) {
        for(int p : print) {
            cout << p << " ";
        }
        cout << "\n";
    } else {
        for(int n : numbers) {
            if(n < last_n) continue;
            print.push_back(n);
            solve(S, n, depth+1);
            print.pop_back();
        }
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> M;
	
    int x;

	for(int i = 0; i < N; i++) {
		cin >> x;
        numbers.insert(x);
	}

    solve(numbers.size(), 0, 0);

    return 0;
}