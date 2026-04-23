#include <stdio.h>

char guyeok = 'A';

// 1: down, 2: up, 3: both
int direction = 1;

void wait() {
    if(guyeok < 'C') guyeok++;
}

void pull() {
    if(guyeok == 'A')
        direction = 3 - direction;
    else if(guyeok == 'B')
        direction = 3;
}

int main(void) {
    int N;
    char S[11];

    scanf("%d\n%s", &N, S);

    for(int i = 0; i < N; i++) {
        char s = S[i];
        if(s == 'W') wait();
        else if(s == 'P') pull();
    }

    int result = 0;
    
    if(guyeok == 'C')
        result = (direction / 2) + 5 * (direction % 2);

    printf("%d", result);
}