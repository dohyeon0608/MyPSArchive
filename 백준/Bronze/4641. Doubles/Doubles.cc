#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool inputed[100];
    int x;
    int result;
    
    while(true) {
        result = 0;
        for(int i = 0; i < 100; i++)
            inputed[i] = false;

        do {
            scanf("%d", &x);
            if(x == -1) {
                return 0;
            }
            inputed[x] = true;
        } while (x != 0);

        // index 범위 수정
        for(int i = 1; i < 50; i++)
            if(inputed[i] && inputed[i * 2]) result++;

        printf("%d\n", result);
    }

    return 0;
}