#include <iostream>
#include <map>
#include <set>

using namespace std;

// 인접 행렬을 이용한 그래프 정의
// 0 - 친구 아님, 1 - 친구 사이, 2 - 2친구 방문 완료
char graph[50][50] = {0};

int main(void) {
	// 입력
	int N;
	cin >> N;
	
	char x[51];
	set<int> roots; // 루트 노드 목록
	map<int, int> friend_counts; // 2-친구 수

	for(int i = 0; i < N; i++) {
		cin >> x;
		for(int j = 0; j < N; j++) {
			if(x[j] == 'Y') {
				graph[i][j] = 1;
				friend_counts[i]++; // 먼저 친구부터 구하기
				roots.insert(i);
			}
		}
	}

	// 최대 실행 횟수: 50 * (1 + 2 + 3 + ... + 50) = 50 * 1275 = 63750 (시간 제한 안 걸림!)
	// 2-친구 구하기
	for(auto root : roots) {
		for(int a = 0; a < N; a++) {
			for(int b = 0; b < a; b++) {
				if((graph[root][a] == 1) && (graph[root][b] == 1) && !graph[a][b]) {
					// a - (친구 c) - b && a !- b
					friend_counts[a]++;
					friend_counts[b]++;
					// 방문 완료
					graph[a][b] = 2;
					graph[b][a] = 2;
				}
			}
		}
	}

	// 출력
	int max = 0;
	for(auto i : friend_counts) {
		if(i.second > max) max = i.second;
	}

	cout << max << "\n";

	return 0;
}