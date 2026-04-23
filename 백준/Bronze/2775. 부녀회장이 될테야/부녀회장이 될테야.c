#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T-- > 0) {
        int k, n;
        scanf("%d %d", &k, &n);

        int lastFloor[14] = {0};
        int nowFloor[14] = {0};

        for(int i = 0; i < k; i++) {
            for(int ii = 0; ii < 14; ii++) { // 이전 층 적용
                lastFloor[ii] = nowFloor[ii];
            }
            if(i == 0) {
                for(int ii = 0; ii < 14; ii++) { // 초기화
                    nowFloor[ii] = ii+1;
                }
            } else {
                int temp = 0;
                for(int ii = 0; ii < 14; ii++) { // 현재 층 계산
                    temp += lastFloor[ii];
                    nowFloor[ii] = temp;
                }
            }
        }

        int temp = 0;
        for(int ii = 0; ii < n; ii++) {
            temp += nowFloor[ii];
        }
        printf("%d\n", temp);
    }

    return 0;
}