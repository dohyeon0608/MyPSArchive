#include <iostream>
#include <algorithm>
#include <vector>

typedef struct
{
    int x;
    int y;
}Point;

bool compare(Point a, Point b) {
    if(a.x != b.x) {
        return a.x < b.x;
    } else {
        return a.y < b.y;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;
    std::cin >> N;

    std::vector<Point> points(N);
    int x;
    int y;
    for(int i = 0; i < N; i++) {
        std::cin >> x >> y;
        points[i] = Point{x, y};
    }

    std::sort(points.begin(), points.end(), compare);

    for(auto i : points) {
        std::cout << i.x << " " << i.y << "\n";
    }

    return 0;
}