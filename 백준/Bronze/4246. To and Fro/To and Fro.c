#include <stdio.h>
#include <string.h>

int main(void) {
    int rows, columns;
    char message[201];
    char letter;

    while(1) {
        scanf("%d", &columns);
        if(columns == 0) break;

        scanf("%s", message);
        rows = strlen(message) / columns;

        for(int c = 0; c < columns; c++) {
            for(int r = 0; r < rows; r++) {
                if(r % 2 == 0)
                    letter = message[r * columns + c];
                else
                    letter = message[(r+1) * columns - c - 1];
                
                putchar(letter);
            }
        }
        printf("\n");
        
    }

    return 0;
}