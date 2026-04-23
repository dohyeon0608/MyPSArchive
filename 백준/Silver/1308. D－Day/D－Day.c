#include <stdio.h>

const int MONTH_DAY[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char isYoon(int x) {
    char isDivid4 = x % 4 == 0;
    char isDivid100 = x % 100 == 0;
    char isDivid400 = x % 400 == 0;
    return (isDivid4 && !isDivid100) || isDivid400;
}

int nthDay(int y, int m, int d) {
    int result = 0;
    if(isYoon(y) && m > 2) result++;
    for(int i = 0; i < m-1; i++) {
        result += MONTH_DAY[i];
    }
    result += d;
    return result;
}

int main(void) {
    int y, m, d;
    int Y, M, D;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &Y, &M, &D);

    if(Y > y+1000 || (Y == y+1000 && (nthDay(Y, M, D) >= nthDay(Y, m, d)))) {
        printf("gg\n");
        return 0;
    }

    int dDay = 0;
    if(y == Y) {
        dDay = nthDay(Y, M, D) - nthDay(y, m, d);
    } else {
        for(int i = y+1; i < Y; i++) {
            dDay += 365;
            if(isYoon(i)) dDay++;
        }
        dDay += ((isYoon(y)? 366 : 365) - nthDay(y, m, d) + nthDay(Y, M, D) );
    }
    printf("D-%d\n", dDay);
    return 0;
}