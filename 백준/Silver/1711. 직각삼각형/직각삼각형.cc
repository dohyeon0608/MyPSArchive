#include <iostream>
#define ld long long

using namespace std;

struct Point {
    int x;
    int y;
};

// 내적을 이용해 직각 판단
bool is_sujik(Point v1, Point v2) {
    ld result = (ld) v1.x * v2.x + (ld) v1.y * v2.y;
    return (result == 0);
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    Point points[1500];

    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        points[i] = Point{ x, y };
    }

    int result = 0;

    for (int a = 0; a < N; a++) {
        for (int b = 0; b < a; b++) {
            for (int c = 0; c < b; c++) {
                int set[5] = { a, b, c, a, b };
                bool flag = false;
                for (int i = 0; i < 3; i++) {
                    Point v1 = Point{ points [set[i + 1]].x - points[set[i]].x, points[set[i + 1]].y - points [set[i]] .y };
                    Point v2 = Point{ points[set[i + 2]].x - points[set[i + 1]].x, points[set[i + 2]].y - points [set[i + 1]] .y };
                    if (is_sujik(v1, v2)) {
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    result++;
                }
            }
        }
    }

    cout << result << "\n";

    return 0;
}