#include <stdio.h>

int main() {
    int deque[2000002];
    int front = 1000001;
    int back = 1000000;
    int command;
    int N;
    int X;

    scanf("%d", &N);
    while(N-- > 0) {
        scanf("%d", &command);
        switch (command)
        {
        case 1:
            // push_front
            scanf("%d", &X);
            deque[front++] = X;
            break;
        case 2:
            // push_back
            scanf("%d", &X);
            deque[back--] = X;
            break;
        case 3:
            // pop_front
            if(front - back == 1) printf("-1\n");
            else printf("%d\n", deque[--front]);
            break;
        case 4:
            // pop_back
            if(front - back == 1) printf("-1\n");
            else printf("%d\n", deque[++back]);
            break;
        case 5:
            printf("%d\n", front - back - 1);
            break;
        case 6:
            if(front - back == 1) printf("1\n");
            else printf("0\n");
            break;
        case 7:
            if(front - back == 1) printf("-1\n");
            else printf("%d\n", deque[front - 1]);
            break;
        default:
            if(front - back == 1) printf("-1\n");
            else printf("%d\n", deque[back + 1]);
            break;
        }
    }
    return 0;
}