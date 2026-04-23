#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    bool switches[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &switches[i]);
    
    int m;
    scanf("%d", &m);

    int g, k;

    for(int i = 0; i < m; i++) {
        scanf("%d %d", &g, &k);
        if(g == 1) {
            for(int j = k-1; j < n; j += k) {
                switches[j] = !switches[j];
            }
        } else {
            int r;
            k--;
            for(r = 0; ; r++) {
                if(k-r < 0 || k+r >= n) break;
                if(switches[k-r] != switches[k+r]) break;
            }
            r--;
            
            for(int j = k-r; j <= k+r; j++) {
                switches[j] = !switches[j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", switches[i]);
        if(i % 20 == 19) printf("\n");
    }

    return 0;
}