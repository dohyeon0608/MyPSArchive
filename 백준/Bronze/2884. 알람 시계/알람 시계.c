#include <stdio.h>

int main(void) {
    int min, sec;
    scanf("%d %d", &min, &sec);
    int time = min * 60 + sec - 45;
    time = (time < 0)? time + 24*60 : time;
    printf("%d %d", time/60, time%60);
    
    return 0;
}