#include <stdio.h>

int main(void) {
    char ch;
    int T, idx;

    scanf("%d", &T);

    while(T-- > 0) {
        scanf("%d", &idx);
        getchar();
        while((ch = getchar()) != '\n') {
            if(--idx == 0) continue;
            else putchar(ch);
        }
        putchar('\n');
    }

    return 0;
}