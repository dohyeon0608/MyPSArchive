#include <stdio.h>
#include <string.h>
#define LENGTH 1000000

char S_t[LENGTH+1];

int get_chunk(const char* S, const char* deli) {
    int result = 0;

    strcpy(S_t, S);
    char *tok = strtok(S_t, deli);

    while (tok != NULL) {
        if(strcmp(tok, "") != 0) result++;
        tok = strtok(NULL, deli);
    }

    return result;
}

int main(void) {
    char S[LENGTH+1];
    scanf("%s", S);

    int zeros = get_chunk(S, "1");
    int ones = get_chunk(S, "0");

    if(zeros > ones)
        printf("%d", ones);
    else
        printf("%d", zeros);

    return 0;
}