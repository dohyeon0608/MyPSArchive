#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int N;
	cin >> N;

	string password;
	set<string> passwordSet;

	bool isEnded = false;

	while(N-- > 0) {
		cin >> password;

		if(isEnded) continue;

		string reversed_password(password.rbegin(), password.rend());

		if(reversed_password == password || passwordSet.find(reversed_password) != passwordSet.end()) {
			int length = password.length();
			cout << length << " " << password[length / 2] << "\n";
			isEnded = true;
			continue;
		}

		passwordSet.insert(password);
	}

    return 0;
}