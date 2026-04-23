#include <stdio.h>

int reverse(int n) {
    int result = 0;
    int temp = n;
    result += (temp % 10) * 100;
    temp /= 10;
    result += (temp % 10) * 10;
    temp /= 10;
    result += (temp % 10);
    return result;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int n1 = reverse(a);
    int n2 = reverse(b);

    printf("%d", (n1 > n2)? n1 : n2);

    return 0;
}