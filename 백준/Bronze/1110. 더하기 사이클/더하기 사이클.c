#include <stdio.h>

int get_sum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    int x = N;
    int length = 0;
    
    do {
        x = x%10 * 10 + get_sum(x) % 10;
        length++;
    } while (x != N);
    
    printf("%d", length);
    
    return 0;
}