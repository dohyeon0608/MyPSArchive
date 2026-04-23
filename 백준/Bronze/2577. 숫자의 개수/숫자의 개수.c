#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = a * b * c;
    int temp;
    int digit;

    temp = sum;
    
    // 자리 구하기
    while(temp != 0) { 
        digit++;
        temp /= 10;
    }

    char count[10] = {0};
    temp = sum;

    // 각각의 자릿수 구하기
    while(temp != 0) {
        count[temp % 10] += 1;
        temp /= 10;
    }

    // 출력
    for(int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}