#include <stdio.h>

int gcd(int a, int b) {
    if(a < b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int lcm3(int a, int b, int c) {
    return lcm(a, lcm(b, c));
}

int main(void) {
    int numbers[5];
    int i, j, k;
    int result = 1000000, temp;
    
    for(i = 0; i < 5; i++) {
        scanf("%d", numbers + i);
    }

    for(i = 0; i < 5; i++) {
        for(j = i+1; j < 5; j++) {
            for(k = j+1; k < 5; k++) {
                temp = lcm3(numbers[i], numbers[j], numbers[k]);
                if(temp < result) result = temp;
            }
        }
    }

    printf("%d", result);

    return 0;
}