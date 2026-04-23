#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int streak = 0;
    int score = 0;

    for(int i = 0; i < n; i++) {
        char answer[81];
        score = 0;
        streak = 0;
        scanf("%s", answer);
        int stop = 0;
        for(int j = 0; j < 81; j++) {
            if(stop)
                break;
            switch (answer[j])
            {
                case 'O':
                    score += 1 + streak++;
                    break;
                case 'X':
                    streak = 0;
                    break;
                default:
                    stop = 1;
                    break;
            }
        }
         printf("%d\n", score);
    }
    return 0;
}