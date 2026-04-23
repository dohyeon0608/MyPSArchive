#include <iostream>

int main() {
    int min_xy[2] = {11, 11};
    int max_xy[2] = {-11, -11};

    int a, b, c, d;
    int N;
    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> a >> b >> c >> d;
        if(a < min_xy[0]) min_xy[0] = a;
        if(b < min_xy[1]) min_xy[1] = b;
        if(c > max_xy[0]) max_xy[0] = c;
        if(d > max_xy[1]) max_xy[1] = d;
        std::cout << 2 * (max_xy[0]-min_xy[0] + max_xy[1]-min_xy[1]) << "\n";
    }

    return 0;
}