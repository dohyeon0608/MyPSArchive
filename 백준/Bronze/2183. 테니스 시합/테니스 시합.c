#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    char S[100001];
    
    scanf("%d %s", &N, S);
    printf("%c", S[strlen(S) - 1]);

    return 0;
}