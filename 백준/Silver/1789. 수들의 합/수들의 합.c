#include <stdio.h>

int main(void) {
    unsigned int S, result = 0;
    long long temp = 0;

    scanf("%d", &S);

    while(1) {
        temp += ++result;
        if(temp > S) {
            printf("%d", result - 1);
            break;
        }
    }

    return 0;
}