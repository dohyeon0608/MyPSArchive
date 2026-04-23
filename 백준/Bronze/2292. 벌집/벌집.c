#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int room = 1;
    // N번째 방까지 k개의 방을 지나는 경우, N =1+6+12+...+6k

    while(N > 1) {
        N -= room++ * 6;
    }

    printf("%d\n", room);

    return 0;
}