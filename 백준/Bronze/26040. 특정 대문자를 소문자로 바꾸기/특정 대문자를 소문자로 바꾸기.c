#include <stdio.h>
#define MAX_LENGTH 100000

int main(void) {
    char A[MAX_LENGTH+1];
    scanf("%s", A);
    getchar();

    char b;
    while((b = getchar()) != '\n') {
        if(b == ' ') continue;
        char *p = A;
        for(; *p != '\0'; p++) {
            if(*p == b)
                *p = (*p - 'A') + 'a';
        }
    }

    printf("%s", A);

    return 0;
}