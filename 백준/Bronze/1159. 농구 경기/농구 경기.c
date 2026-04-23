#include <stdio.h>
#include <stdbool.h>
#define LENGTH 30

int main(void) {
    int initials[26] = {0};
    char name[LENGTH+1];
    int N;

    scanf("%d", &N);

    while(N-- > 0) {
        scanf("%s", name);
        initials[name[0] - 'a']++;
    }

    bool predaja = true;

    for(char i = 'a'; i <= 'z'; i++) {
        if(initials[i - 'a'] >= 5) {
            predaja = false;
            putchar(i);
        }
    }

    if(predaja)
        printf("PREDAJA");

    return 0;
}