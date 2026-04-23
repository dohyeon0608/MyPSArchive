#include <stdio.h>

int main() {
    char back[100][100] = {0,};

    int N;
    scanf("%d", &N);

    int result = 0;

    for(int i = 0; i < N; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        for(int j = x; j < x+10; j++) {
            for(int k = y; k < y+10; k++) {
                if(back[j][k] == 0) {
                    result++;
                    back[j][k] = 1;
                }
            }
        }
    }

    printf("%d\n", result);

    return 0;
}