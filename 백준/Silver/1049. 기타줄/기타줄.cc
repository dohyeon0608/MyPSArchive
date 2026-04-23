#include <iostream>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    
    int set_min = -1, single_min = -1;
    int x, y;
    for(int i = 0; i < M; i++) {
        cin >> x >> y;
        if(set_min == -1 || x < set_min) set_min = x;
        if(single_min == -1 || y < single_min) single_min = y;
    }
    
    int single_mod; // 단품 가격이 세트 가격보다 쌀 때의 최소 단품 개수
    if(single_min != 0) single_mod = set_min / single_min;
    else single_mod = 7;
    
    int result = 0;
    
    if(single_mod > 6) { // 모든 경우에서 단품 가격이 쌀 때
        result = single_min * N;
    } else if(single_mod == 0) { // 모든 경우에서 세트 가격이 쌀 때
        result = set_min * (N / 6);
        if(N % 6 != 0) result += set_min;
    } else {
        result = set_min * (N / 6);
        if(N % 6 > single_mod) {
            result += set_min;
        } else {
            result += single_min * (N % 6);
        }
    }
    
    cout << result << "\n";
    
    return 0;
}