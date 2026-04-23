#include <stdio.h>

void into(int *x, int a, int b) {
    if(*x < a)
        *x = a;
    else if(*x > b)
        *x = b;
}

int main(void) {
    int bb1[4], bb2[4], tr[8];
    int i;

    for(i = 0; i < 4; i++)
        scanf("%d", bb1 + i);
    
    for(i = 0; i < 4; i++)
        scanf("%d", bb2 + i);
    
    for(i = 0; i < 4; i++) {
        scanf("%d", tr + i);
        tr[4+i] = tr[i];
    }

    for(i = 0; i < 4; i++) {
        into(tr + i, bb1[i % 2], bb1[2 + i % 2]);
        into(tr + 4 + i, bb2[i % 2], bb2[2 + i % 2]);
    }

    int result = (bb1[2] - bb1[0]) * (bb1[3] - bb1[1]) + (bb2[2] - bb2[0]) * (bb2[3] - bb2[1])
        - (tr[2] - tr[0]) * (tr[3] - tr[1])
        - (tr[6] - tr[4]) * (tr[7] - tr[5]);

    printf("%d", result);

    return 0;
}