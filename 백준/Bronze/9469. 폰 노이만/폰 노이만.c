#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    int N;
    double D, A, B, F;
    
    while(T-- > 0) {
        scanf("%d %lf %lf %lf %lf", &N, &D, &A, &B, &F);
        double distance = D / (A + B) * F;
        printf("%d %.6lf\n", N, distance);
    }

    return 0;
}