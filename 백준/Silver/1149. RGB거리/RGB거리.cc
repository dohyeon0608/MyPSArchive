#include <iostream>

using namespace std;

int min(int a, int b) {
    return (a < b)? a : b;
}

int main(void) {
    int RGB[1000][3];

    // i번째 집에서 c색을 칠할 때 최소 비용
    int min_price[1000][3];
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];
    }

    min_price[0][0] = RGB[0][0];
    min_price[0][1] = RGB[0][1];
    min_price[0][2] = RGB[0][2];
    
    for(int i = 1; i < N; i++) {
        for(int c = 0; c < 3; c++) {
            int c_1 = (c+1)%3; // c색과 다른 색 1
            int c_2 = (c+2)%3; // c색과 다른 색 2
            min_price[i][c] = min(min_price[i-1][c_1] + RGB[i][c], min_price[i-1][c_2] + RGB[i][c]);
        }
    }

    // for(int i = 0; i < N; i++) {
    //     for(int c = 0; c < 3; c++) {
    //         cout << min_price[i][c] << " ";
    //     }
    //     cout << "\n";
    // }

    int result = min(min_price[N-1][0], min_price[N-1][1]);
    result = min(result, min_price[N-1][2]);

    cout << result << "\n";
    
    return 0;
}