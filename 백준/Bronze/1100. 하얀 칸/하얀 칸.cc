#include <stdio.h>
#define SIZE 8

int main(void) {
    char line[9];
    int result = 0;

    for(int i = 0; i < SIZE; i++) {
        scanf("%s", line);
        for(int j = 0; j < SIZE; j++) {
            if(!((i % 2) ^ (j % 2)) && line[j] == 'F') {
                result++;
            }
        }
    }

    printf("%d", result);
    
    return 0;
}