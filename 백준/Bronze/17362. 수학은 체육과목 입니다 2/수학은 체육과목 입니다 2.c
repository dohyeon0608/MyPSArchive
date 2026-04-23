#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int answer;
    switch (n % 8)
    {
    case 1:
        answer = 1;
        break;
    case 2:
    case 0:
        answer = 2;
        break;
    case 3:
    case 7:
        answer = 3;
        break;
    case 4:
    case 6:
        answer = 4;
        break;
    default:
        answer = 5;
        break;
    }

    printf("%d\n", answer);
    return 0;
}