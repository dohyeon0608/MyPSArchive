#include <stdio.h>

/*
이진법으로 접근해보자.
막대기를 잘랐을 때, 막대기의 길이는 항상 2의 거듭제곱이다.
따라서, X를 이진법으로 나타낸 후, 각 자리수를 확인한다.
그러하여 만약 자릿수가 1이라면 이에 맞는 길이의 막대기가 필요하다는 이야기이므로, 필요한 막대기의 개수를 늘린다.
*/

int main(void) {
    int X;
    scanf("%d", &X);
    int result = 0;
    for(int i=0; i<7; i++) {
        if(X % 2 == 1) {
            result++;
        }
        X /= 2;
    }
    printf("%d\n", result);
    
    return 0;
}