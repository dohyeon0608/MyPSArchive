#include <stdio.h>
#include <stdbool.h>
#define STUDENT_SIZE 100
#define MAX_NAME_LENGTH 60

int main(void) {
    int s_no, n;
    char names[STUDENT_SIZE][MAX_NAME_LENGTH+1];
    bool is_confiscated[STUDENT_SIZE];

    int no;
    char ch;

    for(s_no = 1; ; s_no++) {
        scanf("%d", &n);

        if(n == 0) break;

        for(int i = 0; i < n; i++) {
            is_confiscated[i] = false;
        }

        while (getchar() != '\n');
        for(int i = 0; i < n; i++) {
            gets(names[i]);
        }

        for(int i = 0; i < 2 * n - 1; i++) {
            scanf("%d %c", &no, &ch);
            is_confiscated[no-1] = !is_confiscated[no-1];
        }

        for(int i = 0; i < n; i++) {
            if(is_confiscated[i]) {
                printf("%d %s\n", s_no, names[i]);
            }
        }
    }

    return 0;
}