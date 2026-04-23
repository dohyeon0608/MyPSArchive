#include <stdio.h>

int main(void) {
    int count;
    scanf("%d", &count);

    int sum = 0;

    char number[count];
    scanf("%s", number);

    for(int i = 0; i < count; i++) {
        sum += number[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}