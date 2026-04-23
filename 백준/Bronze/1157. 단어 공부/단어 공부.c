#include <stdio.h>

int main()
{
    char str[1000000];
    scanf("%s", str);

    int count[27] = {0};

    int i = 0;
    char chr;
    char ident; // 알파벳 고유값

    while((chr = str[i]) != 0) {
        ident = chr % 0x20; // cf. A = 0x41, a = 0x61
        count[ident] += 1;
        i++;
    }

    int max_index = 0;
    char has_overlap = 0; // 여러 알파벳이 많이 있는 경우

    for(i = 1; i < 27; i++) {
        // printf("%c = %d\n", i + 0x40, count[i]); // 디버그
        if(count[i] > count[max_index]) {
            max_index = i;
            has_overlap = 0;
        } else if(count[i] == count[max_index]) {
            has_overlap = 1;
        }
    }

    printf("%c", (has_overlap)? '?' : max_index + 0x40);

    return 0;
}