#include <stdio.h>
#include <stdbool.h>
#define SIZE 6

typedef struct {
    char row;
    char column;
} Pos;

bool isValidMove(Pos prev, Pos cur) {
    int moveConst = (cur.column - prev.column) * (cur.row - prev.row);
    return moveConst == -2 || moveConst == 2;
}

int main(void) {
    bool board[SIZE][SIZE] = {false};
    int unvisited = SIZE*SIZE;
    bool isValid = true;
    Pos begin;
    Pos prev;
    Pos cur;

    for(int i = 0; i < 36; i++) {
        scanf("%c%c", &cur.column, &cur.row);
        getchar();
        cur.column -= 'A';
        cur.row -= '1';

        if(!isValid) continue;

        if(!board[cur.column][cur.row]) {
            board[cur.column][cur.row] = true;
            unvisited--;
        } else {
            isValid = false;
        }

        if(i > 0) {
            isValid = isValidMove(prev, cur);
        } else {
            begin = cur;
        }
        
        prev = cur;
    }

    isValid = isValid && (unvisited == 0) && isValidMove(begin, cur);

    if(isValid) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}