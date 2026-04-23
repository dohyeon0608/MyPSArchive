#include <stdio.h>

int main(void) {
    char problem[10];
    int N;
    int plusIndex;
    int endIndex;
    int a, b;

    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        a = b = 0;
        scanf("%s", problem);
        if(problem[0] =='P') {
            printf("skipped\n");
            continue;
        }

        for(int j = 9; j >= 0; j--) {
            if(problem[j] == 0) endIndex = j;
            if(problem[j] == '+') plusIndex = j;
        }

        for(int j = 0; j < plusIndex; j++) {
            a += problem[j] - '0';
            a *= 10;
        }

        for(int j = plusIndex + 1; j < endIndex; j++) {
            b += problem[j] - '0';
            b *= 10;
        }

        a /= 10; b /= 10;

        printf("%d\n", a + b);
        
    }

    return 0;
}