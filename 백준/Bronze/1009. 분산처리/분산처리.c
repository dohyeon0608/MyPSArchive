#include <stdio.h>

// 결국 구해야하는 것은 a^b의 일의 자리 인데 0이면 10번 컴퓨터
int main(void) {
    int count;
    scanf("%d", &count);
    while(count > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        int n = 1;
        for(int i = 0; i < b; i++) { 
            n *= a;
            n %= 10;
        }
        printf("%d\n", (n==0)? 10 : n);
        count--;
    }
}