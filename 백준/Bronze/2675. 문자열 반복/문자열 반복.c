#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int repeat;
        char string[21];

        scanf("%d", &repeat);
        scanf("%s", string);

        for(int j = 0; j < 20; j++) {
            if(string[j] == 0)
                break;
            for(int k = 0; k < repeat; k++) {
                printf("%c", string[j]);
            }
        }

        printf("\n");
    }
    return 0;
}