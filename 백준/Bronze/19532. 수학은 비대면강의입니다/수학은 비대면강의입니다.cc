#include <iostream>

int main() {
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    int x;
    int y;

    bool stop = false;

    for(x = -999; x <= 999; x++) {
        for(y = -999; y <= 999; y++) {
            if(a*x+b*y==c && d*x+e*y==f) {
                stop = true;
                break;
            }
        }
        if(stop) break;
    }

    std::cout << x << " " << y << "\n";

    return 0;
}