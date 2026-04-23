#include <stdio.h>
#define MAX_SIZE 1000000

short strokes[26] = {
    3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1
};

int main(void) {
    char ch;

    short result = 0;
    
    while((ch = getchar()) != '\n') {
        result += strokes[ch-'A'];
        result %= 10;
    }

    if(result % 2 == 1) {
        printf("I'm a winner!");
    } else {
        printf("You're the winner?");
    }

    return 0;
}