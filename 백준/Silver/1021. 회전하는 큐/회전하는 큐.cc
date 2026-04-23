#include <iostream>
#include <deque>

using namespace std;

void left_rotate(deque<int> &D) {
	int f = D.front();
	D.pop_front();
	D.push_back(f);
}

void right_rotate(deque<int> &D) {
	int b = D.back();
	D.pop_back();
	D.push_front(b);
}

int main(void) {
	deque<int> D, positions;
	int N, M;

	cin >> N >> M;

	for(int i = 1; i <= N; i++)
		D.push_back(i);
	
	int x;
	for(int i = 0; i < M; i++) {
		cin >> x;
		positions.push_back(x);
	}

	deque<int> left, right;
	int result = 0;
	int target;

	while(!positions.empty()) {
		left = right = D;
		target = positions.front();
		for(int k = 0; ; k++) {
			if(left.front() == target) {
				left.pop_front();
				D = left;
				result += k;
				break;
			}
			if(right.front() == target) {
				right.pop_front();
				D = right;
				result += k;
				break;
			}
			left_rotate(left);
			right_rotate(right);
		}
		positions.pop_front();
	}
	
	cout << result;

	return 0;
}