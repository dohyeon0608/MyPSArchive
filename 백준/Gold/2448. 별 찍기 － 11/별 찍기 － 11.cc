#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<char>> &charmap, int top_x, int top_y, int size) {
    if(size == 3) {
        charmap[top_x][top_y] = '*';
        charmap[top_x - 1][top_y + 1] = '*';
        charmap[top_x + 1][top_y + 1] = '*';
        for(int i = -2; i <= 2; i++) {
            charmap[top_x + i][top_y + 2] = '*';
        }
    } else {
        int new_size = size >> 1;
        solve(charmap, top_x, top_y, new_size);
        solve(charmap, top_x - new_size, top_y + new_size, new_size);
        solve(charmap, top_x + new_size, top_y + new_size, new_size);
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<vector<char>> charmap(2*N+1, vector<char>(N+1, ' '));


    solve(charmap, N, 0, N);

    for(int y = 0; y < N; y++) {
        for(int x = 1; x < 2*N; x++) {
            cout << charmap[x][y];
        }
        cout << "\n";
    }

    return 0;
}