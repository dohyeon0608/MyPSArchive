#include <stdio.h>

int main(void) {
    char submit[30] = {0};
    int index;
    
    for(int i = 0; i < 28; i++) {
        scanf("%d", &index);
        submit[index-1] = 1;
    }
    
    for(int i = 0; i < 30; i++) {
        if(submit[i] == 0)
            printf("%d\n", i+1);
    }
    
    return 0;
}