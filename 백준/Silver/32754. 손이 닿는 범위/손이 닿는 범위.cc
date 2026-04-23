#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
직사각형이 무게중심을 기준으로 회전시킬 수 있다 하였다.
우리는 이 직사각형이 원에 닿는지만 보면 되므로 이 직사각형을...
원으로 근사할 수 있지 않을까?
*/

struct Point {
    int x;
    int y;
};

struct Circle {
    // 원의 중심 좌표의 2배
    Point center; 

    // 원의 반지름의 제곱의 4배
    int radius;
};

int norm(int a, int b) {
    return a * a + b * b;
}

vector<Circle> circles;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, R;
    cin >> N >> R;

    int x1, y1;
    int G_x, G_y;
    int x, y;

    // 직사각형이 꼭 x,y축에 평행할 필요 X
    for (int i = 0; i < N; i++) {
        x1 = y1 = -1001;
        G_x = G_y = 0;
        for (int j = 0; j < 4; j++) {
            cin >> x >> y;
            if (x1 == -1001) {
                x1 = x;
                y1 = y;
            }
            G_x += x;
            G_y += y;
        }
        G_x /= 2;
        G_y /= 2;
        int r = norm(G_x - 2*x1, G_y - 2*y1);
        circles.push_back(Circle{ Point{G_x, G_y}, r });
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        Circle circle = circles[i];
        double distance = sqrt(norm(circle.center.x, circle.center.y))/2;
        double r = sqrt(circle.radius)/2; // r

        /* 
        R+r >= D
        */

        // 디버그용
        /*cout << R << " + " << r << " = " << R+r << " vs " << distance << "\n";*/
        if (R + r >= distance) {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}