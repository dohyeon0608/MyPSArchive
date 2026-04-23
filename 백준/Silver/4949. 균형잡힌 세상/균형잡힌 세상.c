#include <stdio.h>

int main() {
    while(1) {
        char input[100];
        gets(input);
        if(input[0] == '.' && input[1] == '\0') break;

        // ( = 0, [ = 1
        char stack[50] = {0};
        int index = 0;
        char doing = 1;

        for(int i = 0; input[i] != '\0' && doing; i++) {
            char inputC = input[i];
            char doPop = 0;

            switch (inputC)
            {
            case '(':
                stack[index++] = 0;
                break;
            case '[':
                stack[index++] = 1;
                break;
            case ')':
                if(index == 0) {
                    index = -1;
                    doing = 0;
                } else {
                    doPop = stack[index-1] == 0;
                    if(!doPop) {
                        index = -1;
                        doing = 0;
                    }
                }
                break;
            case ']':
                if(index == 0) {
                    index = -1;
                    doing = 0;
                } else {
                    doPop = stack[index-1] == 1;
                    if(!doPop) {
                        index = -1;
                        doing = 0;
                    }
                }
                break;
            default:
                break;
            }

            if(doPop) {
                index--;
            }
        }

        printf((index == 0)? "yes" : "no");
        printf("\n");
    }

    return 0;
}