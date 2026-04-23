#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int input;
    int max = 0;
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &input);
        sum += input;
        max = (input > max)? input : max;
    }
    
    printf("%f", (100.0 * sum) / (n * max));
    
    return 0;
}