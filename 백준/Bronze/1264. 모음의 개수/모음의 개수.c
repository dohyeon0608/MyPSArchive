#include <stdio.h>

int main(void) {
    char ch;
    int result = 0;

    while((ch = getchar()) != '#') {
        if(ch == '\n') {
            printf("%d\n", result);
            result = 0;
            continue;
        }
        if(ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            result++;
        }
    }

    return 0;
}