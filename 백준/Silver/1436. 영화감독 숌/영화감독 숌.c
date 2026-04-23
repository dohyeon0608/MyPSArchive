#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int result = 0;
    int temp;

    while(N > 0) {
        temp = ++result;
        char lastDigit[3] = {0};
        while(temp > 0) {
            lastDigit[0] = lastDigit[1];
            lastDigit[1] = lastDigit[2];
            lastDigit[2] = temp % 10;
            if(lastDigit[0] == lastDigit[1] && lastDigit[1] == lastDigit[2] && lastDigit[0] == 6) {
                N--;
                temp = 0;
            } else {
                temp /= 10;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}