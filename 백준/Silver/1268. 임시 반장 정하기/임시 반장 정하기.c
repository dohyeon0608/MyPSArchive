#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    int s, y;

    scanf("%d", &n);

    int classes[n][5];
    bool met_studs[n][n];

    for(s = 0; s < n; s++) {
        for(y = 0; y < 5; y++) {
            scanf("%d", &classes[s][y]);
        }
        for(int s2 = 0; s2 < n; s2++) {
            met_studs[s][s2] = false;
        }
    }

    for(y = 0; y < 5; y++) {
        for(int s1 = 0; s1 < n; s1++) {
            for(int s2 = s1 + 1; s2 < n; s2++) {
                if(classes[s1][y] == classes[s2][y]) {
                    met_studs[s1][s2] = met_studs[s2][s1] = true;
                }
            }
        }
    }

    int res = 0;
    int hi_met = 0;
    int met = 0;
    for(s = 0; s < n; s++){
        met = 0;
        for(int s2 = 0; s2 < n; s2++) {
            if(met_studs[s][s2]) met++;
        }
        if(met > hi_met) {
            hi_met = met;
            res = s;
        }
    }

    printf("%d", res+1);

    return 0;
}