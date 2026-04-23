#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct elline { // electronic line
    int x;
    int y;
};

int max(int a, int b) {
    return (a > b)? a : b;
}

bool compare_line(elline a, elline b) {
    if(a.x != b.x) return a.x < b.x;
    else return a.y < b.y; // 의미 없긴 한데 일단 넣어둠
}

int main(void) {
    vector<elline> ellines;
    int dp[1000] = {0};
    int x, y;
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        ellines.push_back(elline{x, y});
    }

    // 우선 elline.x에 대해 정렬
    sort(ellines.begin(), ellines.end(), compare_line);
    int longest = 0;

    // elline.y에 대해 LIS를 구하면 됨.
    for(int i = 0; i < N; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(ellines[j].y < ellines[i].y) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        longest = max(longest, dp[i]);
    }

    cout << N - longest << "\n";

    return 0;
}