#include <iostream>
#include <cmath>

using namespace std;

int norm_sq(int a, int b) {
    return a * a + b * b;
}

int main(void) {
    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;

    // 정확도를 위해 스케일을 2배로 키워보자.
    int R = H;
    W <<= 1; H <<= 1; X <<= 1; Y <<= 1;

    int x, y;
    int result = 0;
    for (int i = 0; i < P; i++) {
        cin >> x >> y;
        x <<= 1; y <<= 1;

        bool first = (x <= X) && (norm_sq(X - x, (Y + R) - y) <= R * R); // 1번째 반원에 있는 지 검사
        bool second = (x >= X) && (x <= X + W) && (y >= Y) && (y <= Y + H); // 직사각형 구역에 있는지 검사
        bool third = (x >= X + W) && (norm_sq((X + W) - x, (Y + R) - y) <= R * R); // 2번째 반원에 있는지 검사

        if (first || second || third) result++;
    }

    cout << result;

    return 0;
}