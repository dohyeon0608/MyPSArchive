#include <bits/stdc++.h>

using namespace std;

int N;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    cin >> N;
    char charmap[2*N+1][4*N+4] = {0};

    fill(&charmap[0][0], &charmap[2*N][4*N+2+3], ' ');

    for(int i = 0; i < N; i++) {
        charmap[i][2*N-1-i] = '*';
        charmap[N+i][N-1-i] = '*';
        charmap[i][3*N-i] = '*';
        charmap[N+i][2*N+1+i] = '*';
        charmap[i][3*N+2+i] = '*';
        charmap[N+i][4*N+1-i] = '*'; 
    }

    for(int i = 0; i < 2*N; i++) {
        for(int j = 0; j < 4*N+2; j++) {
            cout << charmap[i][j];
        }
        cout << "\n";
    }

    return 0;
}