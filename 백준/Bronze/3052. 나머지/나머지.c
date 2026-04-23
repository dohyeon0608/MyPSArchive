#include <stdio.h>

int main()
{
    char exist[42] = {0};
    char count = 0;
    int n;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if(exist[n%42] == 0) {
            exist[n%42] = 1;
            count++;
        }
    }

    printf("%d", count);
    return 0;
}