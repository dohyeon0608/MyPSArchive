#include <stdio.h>

int main(void) {
    int N, H, x;
    int attacked = 0;
    int result = 1;
    
    scanf("%d %d", &N, &H);

    for(; result <= N; result++) {
        scanf("%d", &x);
        attacked += x;

        if(attacked >= H) break;
    }

    if(result == N + 1) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}