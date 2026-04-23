#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char result[50] = {0};

    while(N > 0) {
        char filename[50];
        scanf("%s", filename);

        if(result[0] == 0) {
            for(int i = 0; filename[i] != '\0'; i++) {
                result[i] = filename[i];
            }
        } else {
            for(int i = 0; result[i] != '\0'; i++) {
                if(result[i] != filename[i]) result[i] = '?';
            }
        }
        N--;
    }

    for(int i = 0; result[i] != '\0'; i++) {
        printf("%c", result[i]);
    }

    return 0;
}