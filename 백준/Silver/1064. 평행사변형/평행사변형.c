#include <stdio.h>
#include <math.h>

double norm(int x, int y) {
    return sqrt(x * x + y * y);
}

int main(void) {
    int xs[5];
    int ys[5];
    int x, y;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", xs + i, ys + i);
        if (i < 2) {
            xs[i+3] = xs[i];
            ys[i+3] = ys[i];
        }
    }

    // dy1/dx1 = dy2/dx2 <=> dy1dx2=dx1dy2
    if ((xs[1] - xs[0]) * (ys[2] - ys[1]) == (xs[2] - xs[1]) * (ys[1] - ys[0])) {
        printf("%lf", -1.0);
        return 0;
    }
    
    double max = -1;
    double min = -1;
    double l;

    for (int i = 0; i < 3; i++) {
        l = norm(xs[i + 1] - xs[i], ys[i + 1] - ys[i]) + norm(xs[i + 2] - xs[i], ys[i + 2] - ys[i]);
        l *= 2;

        if (max == -1) {
            max = l; min = l;
        }
        else {
            if (l > max) max = l;
            if (l < min) min = l;
        }
    }

    printf("%.15lf", max - min);

    return 0;
}