#include <stdio.h>

int max(int a, int b) {
    if(a > b) return a;
    else return b;
}

int main(void) {
    int n, result = 0;
    int arr[10] = {0};

    while((n = getchar() - '0') != '\n' - '0')
        arr[n]++;

    for(int i = 0; i < 9; i++) {
        if(i != 6) result = max(result, arr[i]);
        else
            result = max(result, (arr[6] + arr[9] + 1) / 2);
    }

    printf("%d", result);

    return 0;
}