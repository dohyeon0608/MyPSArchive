#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

map<char, int> game_player = {
    {'Y', 1}, {'F', 2}, {'O', 3}
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	char game;
	string name;
	set<string> names;

	cin >> N >> game;

	int needed_player = game_player[game];
	int players = 0;
	int result = 0;

	for(int i = 0; i < N; i++) {
		cin >> name;
		if(names.find(name) == names.end()) {
			names.insert(name);
			players++;
			if(players >= needed_player) {
				result++;
				players = 0;
			}
		}
	}

	cout << result;

	return 0;
}