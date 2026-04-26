#include <bits/stdc++.h>

using namespace std;

/*
배낭 문제의 핵심은 "해당 물건을 포함할지 안할지"이다.
기존 시도한 방법: 두 물건을 골라 dp[w1+w2] = max(dp[w1+w2], dp[w1]+dp[w2]) 이용
문제점: 셋 이상의 물건을 고르는 경우를 고려하지 않음.
해결 방법: 
1. 단 물건 하나를 고른다 
2. 위 전개식을 변형: dp[현재무게] = max(dp[현재무게], dp[K-현재무게] + 현재가치)
3. 다른 물건에 대해서 반복
(그러면 정렬 안해도 되는 거 아님?)
*/

struct item {
    int w;
    int v;
};

int N, K;
vector<item> items;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    cin >> N >> K;

    // dp[W] : 무게 W까지 최대 가치
    int dp[200001] = {0};

    int W, V;
    for(int i = 0; i < N; i++) {
        cin >> W >> V;
        items.push_back(item{W, V});
    }

    // 각 물품에 대해 탐색
    for(item it : items) {
        for(int w = K; w >= it.w; w--) {
            dp[w] = max(dp[w], dp[w - it.w] + it.v);
        }
    }

    cout << dp[K] << "\n";

    return 0;
}