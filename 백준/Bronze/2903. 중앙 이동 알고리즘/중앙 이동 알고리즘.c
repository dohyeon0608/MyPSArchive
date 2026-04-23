#include <stdio.h>

// 수학적 귀납법...
// n+1번 = n번의 변 개수 + n번의 사각형 개수

int main() {
    int N;
    scanf("%d", &N);

    int squares = 1;
    int sides = 4;
    int points = 4;

    for(int i = 0; i < N; i++) {
        points += squares + sides;
        sides = sides * 2 + squares * 4;
        squares *= 4;
    }

    printf("%d\n", points);

    return 0;
}