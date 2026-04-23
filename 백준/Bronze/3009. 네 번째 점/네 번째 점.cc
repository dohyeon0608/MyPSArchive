#include <iostream>

int main() {
    int xy[3][2];
    int n[2][2];
    int x, y;

    for(int i = 0; i < 3; i++) {
        std::cin >> xy[i][0] >> xy[i][1];
        for(int j = 0; j < i; j++) {
            if(xy[i][0] == xy[j][0]) x = xy[j][0];
            if(xy[i][1] == xy[j][1]) y = xy[j][1];
        }
    }

    for(int i = 0; i < 3; i++) {
        if(x != xy[i][0]) {
            x = xy[i][0];
            break;
        }
    }
    for(int i = 0; i < 3; i++) {
        if(y != xy[i][1]) {
            y = xy[i][1];
            break;
        } 
    }

    std::cout << x << " " << y << "\n";
    
    return 0;
}