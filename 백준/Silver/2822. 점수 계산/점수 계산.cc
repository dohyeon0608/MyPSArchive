#include <iostream>
#include <algorithm>

using namespace std;

struct Problem {
	int no;
	int score;
};

bool compare_score(Problem a, Problem b) {
	return a.score > b.score;
}

bool compare_no(Problem a, Problem b) {
	return a.no < b.no;
}

int main(void) {
	Problem problems[8];

	for(int i = 0; i < 8; i++) {
		cin >> problems[i].score;
		problems[i].no = i + 1;
	}

	sort(problems, problems + 8, compare_score);
	sort(problems, problems + 5, compare_no);

	int result = 0;
	for(int i = 0; i < 5; i++)
		result += problems[i].score;
	
	cout << result << "\n";

	for(int i = 0; i < 5; i++)
		cout << problems[i].no << " ";

	return 0;
}