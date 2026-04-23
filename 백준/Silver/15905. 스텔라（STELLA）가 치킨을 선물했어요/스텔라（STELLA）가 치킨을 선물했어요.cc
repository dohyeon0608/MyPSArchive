#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Score {
    int solved;
    int panalty;
};

bool compare_score(Score a, Score b) {
    if(a.solved != b.solved) {
        return a.solved > b.solved;
    } else {
        return a.panalty < b.panalty;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<Score> scores;
    Score score;
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> score.solved >> score.panalty;
        scores.push_back(score);
    }

    sort(scores.begin(), scores.end(), compare_score);
    score = scores[4];

    auto last = lower_bound(scores.begin(), scores.end(), (Score){.solved = score.solved - 1, .panalty = 0}, compare_score); // solved - 1인 지점이 처음 나타나는 위치
    int result = (last - scores.begin()) - 5;
    cout << result << "\n";

    return 0;
}