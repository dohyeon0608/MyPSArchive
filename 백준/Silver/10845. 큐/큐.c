#include <stdio.h>

int charToInt(char n) {
    return n - 48;
}

int power10(int n) {
    int result = 1;
    for(int i = 0; i < n; i++) result *= 10;
    return result;
}

int main(void) {
    int N;
    scanf("%d", &N);

    int queue[10000] = {0};
    int start = 0;
    int end = 0;

    char command[12];

    while(N-- >= 0) {
        gets(command);
        if(command[0] == 'p' && command[3] == 'h') { // push
            char digit = 0;
            int X = 0;
            for(int i = 5; command[i] != 0; i++) digit++;
            for(int i = 5; command[i] != 0; i++) {X += charToInt(command[i]) * power10(--digit);}
            queue[end++] = X;
        } else if(command[0] == 'p' && command[2] == 'p') { // pop
            if(start == end) printf("-1\n");
            else printf("%d\n", queue[start++]);
        } else if(command[0] == 's' && command[3] == 'e') { // size
            printf("%d\n", end-start);
        } else if(command[0] == 'e' && command[4] == 'y') { // empty
            printf("%d\n", start == end);
        } else if(command[0] == 'f' && command[4] == 't') { // front
            if(start == end) printf("-1\n");
            else printf("%d\n", queue[start]);
        } else if(command[0] == 'b' && command[3] == 'k') { // back
            if(start == end) printf("-1\n");
            else printf("%d\n", queue[end-1]);
        }
    }
    return 0;
}