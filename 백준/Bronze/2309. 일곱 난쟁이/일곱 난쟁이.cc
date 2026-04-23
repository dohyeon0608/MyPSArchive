#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int heights[9];
    int i, j;
    int sum = 0;

    for(i = 0; i < 9; i++){
        cin >> heights[i];
        sum += heights[i];
    }

    sort(heights, heights + 9);

    // 이중 반복문 break하기
    bool flag = false;
    for(i = 0; i < 9; i++) {
        for(j = i+1; j < 9; j++) {
            if(heights[i] + heights[j] == sum - 100) {
                heights[i] = heights[j] = 0;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    for(i = 0; i < 9; i++) {
        if(heights[i] != 0) cout << heights[i] << "\n";
    }
    

    return 0;
}