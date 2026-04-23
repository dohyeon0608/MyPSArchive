#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef struct {
    int start;
    int end;
	int length;
} Shortcut;

typedef struct {
    int value;
    vector<Shortcut> shortcuts;
} Point;

int main(void) {
    int N, D;
    scanf("%d %d", &N, &D);

	map<int, vector<Shortcut>> shortcuts;
	map<int, int> distances;
	int last = 0;

	vector<Shortcut> emptycuts = vector<Shortcut>(0);

    Shortcut sc;
    for(int i = 0; i < N; i++) {
        scanf("%d %d %d", &sc.start, &sc.end, &sc.length);
		if(sc.end <= D && sc.end - sc.start > sc.length) {
			shortcuts[sc.start];
			shortcuts[sc.end].push_back(sc);
		}
    }
	shortcuts[D];

	for(auto itr : shortcuts) {
		int point = itr.first;
		vector<Shortcut> shortcut_list = itr.second;

		int shortest = distances[last] + point - last;

		for(auto sc : shortcut_list) {
			shortest = min(shortest, distances[sc.start] + sc.length);
		}

		distances[point] = shortest;
		last = point;
	}

	printf("%d", distances[D]);

    return 0;
}