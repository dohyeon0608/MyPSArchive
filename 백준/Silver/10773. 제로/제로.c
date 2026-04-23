#include <stdio.h>

int main() {
    int numbers[100000] = {0};
    int index = 0;
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        if(N == 0) {
            numbers[(index--)-1] = 0;
        } else {
            numbers[index++] = N;
        }
    }
    long long int result = 0;
    for(int i = 0; i < index; i++) {
        result += numbers[i];
    }
    printf("%lld\n", result);
    return 0;
}