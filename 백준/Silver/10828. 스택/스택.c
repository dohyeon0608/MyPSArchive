#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 포인터를 이용해 Stack 구현하기

int* push(int *p, int v) {
    (*p++) = v;
    return p;
}

int* pop(int *p) {
    p--;
    return p;
}

int top(int *p) {
    return *(p-1);
}

bool empty(int *p, int *stack_base) {
    return (p == stack_base);
}

int size(int *p, int *stack_base) {
    return (p - stack_base);
}

int main(void) {
    int stack[10001];
    int *stack_base = &stack[0];
    int *p = stack_base;

    int N;
    scanf("%d", &N);

    char opr[6];
    int operand;
    for(int i = 0; i < N; i++) {
        scanf("%s", opr);
        if(strcmp(opr, "push") == 0) {
            scanf("%d", &operand);
            p = push(p, operand);
        } else if(strcmp(opr, "pop") == 0) {
            if(empty(p, stack_base)) {
                printf("-1\n");
            } else {
                printf("%d\n", top(p));
                p = pop(p);
            }
        } else if(strcmp(opr, "size") == 0) {
            printf("%d\n", size(p, stack_base));
        } else if(strcmp(opr, "empty") == 0) {
            printf("%d\n", empty(p, stack_base));
        } else if(strcmp(opr, "top") == 0) {
            if(empty(p, stack_base)) {
                printf("-1\n");
            } else printf("%d\n", top(p));
        }
    }

    return 0;
}