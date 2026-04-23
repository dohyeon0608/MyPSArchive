#include <stdio.h>

void solve(int N, int a, int b, int step) {
    // -1 코드 삭제
    if(a == b) printf("%d", step);
    else solve(N / 2, a / 2, b / 2, step + 1);
}

int main(void) {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    A--; B--;
    solve(N, A, B, 0);

    return 0;
}