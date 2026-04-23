#include <bits/stdc++.h>

using namespace std;

struct Song {
    int N;
    string title;
    string notes;
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

	Song songs[N];
	map<string, int> mapping; // 1~ : normal, 0 : none, -1 : duplicated

	for(int i = 0; i < N; i++) {
		cin >> songs[i].N >> songs[i].title;
		getline(cin, songs[i].notes);

		string note = songs[i].notes.substr(1, 5);

		if(mapping[note] == 0) {
			mapping[note] = i + 1;
		} else {
			mapping[note] = -1;
		}
	}

	string note;

	for(int i = 0; i < M; i++) {
		getline(cin, note);
		int index = mapping[note];

		if(index < 0) {
			cout << "?\n";
		} else if(index == 0) {
			cout << "!\n";
		} else {
			cout << songs[index - 1].title << "\n";
		}
	}


    return 0;
}