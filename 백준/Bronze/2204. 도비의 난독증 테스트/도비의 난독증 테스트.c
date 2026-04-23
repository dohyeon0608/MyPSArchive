#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    char s[21], temp[21], result[21], r_temp[21];

    int i, j;

    while(1) {
        scanf("%d", &T);
        if(T == 0) break;

        for(i = 0; i < T; i++) {
            scanf("%s", s);
            strcpy(temp, s);
            char *p = temp;
            for(; *p; p++) {
                if(*p >= 'A' && *p <= 'Z')
                    *p += - 'A' + 'a';
            }
            if(i == 0 || strcmp(temp, r_temp) < 0) {
                strcpy(result, s);
                strcpy(r_temp, temp);
            }
        }
        printf("%s\n", result);
    }

    return 0;
}