#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

void rotate(Point &p) {
    int x = p.x;
    int y = p.y;
    p.x = y;
    p.y = -x;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    Point points[4];
    int x, y;
    
    while (T-- > 0) {
        Point m = { 0, 0 };

        for (int i = 0; i < 4; i++) {
            cin >> x >> y;
            points[i] = Point{ x << 1, y << 1 };
            m.x += x; m.y += y;
        }
        m.x >>= 1; m.y >>= 1;

        // m이 (0, 0)이 되도록 평행이동
        for (int i = 0; i < 4; i++) {
            points[i].x -= m.x;
            points[i].y -= m.y;
        }
        
        m = Point{ 0, 0 };
        
        // 90도 회전시켜가며 정사각형이 맞는지 확인
        Point p = points[0];
        bool pass = false;

        for (int i = 0; i < 3; i++) {
            rotate(p);
            pass = false; // 초기화 (수정)
            
            // 검사
            for (int i = 1; i < 4; i++) {
                Point t = points[i];
                if (p.x == t.x && p.y == t.y) pass = true;
            }

            // 아웃!
            if (!pass) {
                break;
            }
        }
        
        cout << pass << "\n";
    }

    return 0;
}