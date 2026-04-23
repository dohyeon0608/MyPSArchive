#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void) {
    const double PI = 3.14159265358979;
    
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double x_bar = (x1+x2+x3)/3.0;
    double y_bar = (y1+y2+y3)/3.0;

    double A = 0.5 * abs((x1*y2+x2*y3+x3*y1) - (x2*y1+x3*y2+x1*y3));

    double V_x = A * 2 * PI * y_bar;
    double V_y = A * 2 * PI * x_bar;
    
    printf("%.9lf %.9lf\n", V_x, V_y);

    return 0;
}