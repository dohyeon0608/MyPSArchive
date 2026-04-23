#include <iostream>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;
};

bool compare(Point a, Point b) {
    if(a.y == b.y) {
        return a.x < b.x;
    } else {
        return a.y < b.y;
    }
}

int main() {
    Point points[100001];
    int n;
    cin >> n;
    
    int x, y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        points[i] = Point{x ,y};
    }
    
    sort(points, points + n, compare);
    
    for(int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << "\n";
    }

    return 0;
}