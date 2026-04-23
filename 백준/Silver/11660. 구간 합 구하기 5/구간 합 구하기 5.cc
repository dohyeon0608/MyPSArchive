#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // S[i][j] : 표에서 (0, 0)부터 (i, j)까지의 합
    int S[1024][1024];
    int N, M;
    cin >> N >> M;

    int n;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> n;
            if(i != 0 && j != 0) S[i][j] = S[i][j-1] + S[i-1][j] - S[i-1][j-1] + n;
            else if(i == 0 && j != 0) S[i][j] = S[i][j-1] + n;
            else if(i != 0 && j == 0) S[i][j] = S[i-1][j] + n;
            else S[i][j] = n;
        }
    }

    // for(int i = 0; i < N; i++) {
    //     for(int j = 0; j < N; j++) {
    //         cout << S[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int x1, y1, x2, y2;

    for(int i = 0; i < M; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 != 1 && y1 != 1) cout << S[x2-1][y2-1] - ( S[x2-1][y1-2] + S[x1-2][y2-1]) + S[x1-2][y1-2];
        else if(x1 == 1 && y1 != 1) cout << S[x2-1][y2-1] - S[x2-1][y1-2];
        else if(x1 != 1 && y1 == 1) cout << S[x2-1][y2-1] - S[x1-2][y2-1];
        else cout << S[x2-1][y2-1];
        cout << "\n";
    }
    
    return 0;
}