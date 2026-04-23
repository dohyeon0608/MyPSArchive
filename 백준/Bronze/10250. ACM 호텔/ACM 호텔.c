#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while(T > 0) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);
        int f = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;
        printf("%d%02d\n", f, room);
        
        T -= 1;
    }

    return 0;
}