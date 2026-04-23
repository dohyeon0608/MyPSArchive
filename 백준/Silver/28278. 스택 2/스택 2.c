#include <stdio.h>

int main() {
    int stack[1000000] = {0};
    int N;
    int index = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int command;
        int result;
        int X;
        scanf("%d", &command);
        switch (command)
        {
        case 1:
            scanf("%d", &X);
            stack[index++] = X;
            break;
        case 2:
            if(index == 0) result = -1;
            else {
                result = stack[index-1];
                stack[--index] = 0;
            }
            printf("%d\n", result);
            break;
        case 3:
            printf("%d\n", index);
            break;
        case 4:
            printf("%d\n", (index == 0)? 1:0);
            break;
        case 5:
            result = (index == 0)? -1 : stack[index-1];
            printf("%d\n", result);
            break;
        default:
            break;
        }
    }

    return 0;
}