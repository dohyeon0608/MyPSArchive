#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T-- > 0) {
        int x, y;
        scanf("%d %d", &x, &y);
        int result = 0;
        int d = y - x;
        // 1 + 2 + ... + n + ... + 2 + 1 = n^2
        int maxK = sqrt(d);
        result += maxK * 2 - 1;
        int remain = d - maxK * maxK;

        result += remain / maxK;
        if(remain % maxK != 0) result++;
        printf("%d\n", result);
    }

    return 0;
}