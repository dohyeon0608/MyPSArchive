#include <iostream>
#include <vector>

using namespace std;

vector<int> lan_lengths;
int N, K;

int get_n(int l) {
    int result = 0;
    for(auto length : lan_lengths) {
        result += length / l;
    }
    return result;
}

int run(int s, int e) {
    int m = ((long long)s + e) / 2;
    int v_m = get_n(m);
    // cout << s << " " << e << " / " << v_m << "\n";

    if(N > v_m) {
        return run(s, m);
    } else if(N < v_m) {
        if(get_n(m+1) < N) { // 한계 봉착
            return m; // 이것이 최댓값
        }
        return run(m+1, e);
    } else {
        // 최댓값 조정
        if(get_n(m+1) == N) {
            return run(m+1, e);
        } else {
            return m; // 이것이 최댓값
        }
    }
    
    return -1;
}

int main(void) {
    int buffer;
    cin >> K >> N;
    
    int max_length = 0;
    for(int i = 0; i < K; i++) {
        cin >> buffer;
        if(buffer > max_length) max_length = buffer;
        lan_lengths.push_back(buffer);
    }

    int result = run(1, max_length);
    cout << result << "\n";
    
    return 0;
}