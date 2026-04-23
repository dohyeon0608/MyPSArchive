#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int x;
    vector<int> numbers(N);

    for(int i = 0; i < N; i++) {
        cin >> x;
        numbers[i] = x;
    }

    sort(numbers.begin(), numbers.end());

    int M;
    cin >> M;

    for(int i = 0; i < M; i++) {
        cin >> x;
        int p = 0;
        int r = N-1;
        while(p <= r) {
            int q = (p+r)/2;
            if(x < numbers[q]) {
                r = q - 1;
            } else {
                p = q + 1;
            }
        }
        if(p >= N) p = N-1;
        if(r < 0) r = 0;
        if(numbers[p] == x || numbers[r] == x) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }
    }
    return 0;
}