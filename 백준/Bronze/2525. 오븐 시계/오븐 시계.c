#include <stdio.h>

int main(void) {
    int min, sec, t;
    scanf("%d %d", &min, &sec);
    scanf("%d", &t);
    int time = min * 60 + sec + t;
    time %= 24*60;
    printf("%d %d", time/60, time%60);
    
    return 0;
}