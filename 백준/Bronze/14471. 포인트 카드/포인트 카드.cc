#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, M, A, B;
    int left_cards;
    int result = 0;
    vector<int> left_stamps;

    cin >> N >> M;
    left_cards = M - 1;

    while(M-- > 0) {
        cin >> A >> B;
        if(A >= B) left_cards--;
        else
            left_stamps.push_back(N - A);
    }

    sort(left_stamps.begin(), left_stamps.end());
    for(int i = 0; i < left_cards; i++) {
        result += left_stamps[i];
    }

    cout << result << "\n";
    
    return 0;
}