#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
결국 원래 볼록 다각형에서 점을 하나씩 줄여나가서 삼각형을 만들겠다는 것이다.
그렇다면 N개의 점 중 임의로 세 점을 선택해서 삼각형을 만들어도 되지 않겠는가?
*/

int main(void) {
    int N;
    cin >> N;

    int xs[36];
    int ys[36];

    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> xs[i] >> ys[i];
        if (i == 0) {
            xs[N] = xs[0];
            ys[N] = ys[0];
        }
    }

    double result = 0;

    // 최대 실행 횟수 = 35C3 = 6545
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < a; b++) {
            for (int c = 0; c < b; c++) {
                double S = xs[a] * ys[b] + xs[b] * ys[c] + xs[c] * ys[a]
                    - xs[b] * ys[a] - xs[c] * ys[b] - xs[a] * ys[c];

                    if (S < 0) S *= -1;
                    S /= 2;

                    if (S > result) result = S;
            }
        }
    }

    cout << fixed << setprecision(15) << result;

    return 0;
}