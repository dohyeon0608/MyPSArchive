#include <stdio.h>
#define m 10007

int main(void) {
    int N;
    int arr[1000] = {1, 3};

    scanf("%d", &N);

    for(int i = 2; i < N; i++) {
        arr[i] = 2 * arr[i-2] + arr[i-1];
        arr[i] %= m;
    }

    printf("%d", arr[N-1]);

    return 0;
}