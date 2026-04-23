#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int result = 0;
    int next = 1;
    int N = 1;
    for(int i = 1; i <= B; i++) {
        if(i >= A) result += N;
        if(--next == 0) next = ++N;
    }

    printf("%d\n", result);
    return 0;
}