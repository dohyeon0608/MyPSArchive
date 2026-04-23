#include <stdio.h>

char command[13];
int queue[2000001];

int pow_10(int n) {
    int result = 1;
    while (n > 0) {
        result *= 10;
        n--;
    }
    return result;
}

int main() {
    int back = 0;
    int front = 0;
    int N;

    scanf("%d", &N);

    while (N >= 0) {
        fgets(command, 13, stdin);
        // push
        if (command[0] == 'p' && command[3] == 'h') {
            int digits = 0;
            int number = 0;
            for (int i = 5; command[i] != '\n'; i++) digits++;
            for (int i = 5; command[i] != '\n'; i++) {
                number += (command[i] - 48) * pow_10(--digits);
            }
            queue[back++] = number;
        }
        if (command[0] == 'p' && command[2] == 'p') {
            if (front == back) {
                printf("-1\n");
            }
            else {
                printf("%d\n", queue[front++]);
            }
        }
        if (command[0] == 's' && command[3] == 'e') {
            printf("%d\n", back - front);
        }
        if (command[0] == 'e' && command[4] == 'y') {
            if (front == back) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        if (command[0] == 'f' && command[4] == 't') {
            if (front == back) {
                printf("-1\n");
            }
            else {
                printf("%d\n", queue[front]);
            }
        }
        if (command[0] == 'b' && command[3] == 'k') {
            if (front == back) {
                printf("-1\n");
            }
            else {
                printf("%d\n", queue[back - 1]);
            }
        }
        N--;
    }

    return 0;
}