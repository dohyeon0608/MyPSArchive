#include <iostream>
#include <vector>

typedef std::vector<int> intlist;

bool solved = false;

bool check(const std::vector<intlist> &board, int x, int y) {
    int me = board.at(x).at(y);
    for(int j = 0; j < 9; j++) {
        if(j == y) continue;
        if(board.at(x).at(j) == me) {
            return false;
        }
    }
    for(int i = 0; i < 9; i++) {
        if(i == x) continue;
        if(board.at(i).at(y) == me) {
            return false;
        }
    }
    int bx = (x / 3) * 3;
    int by = (y / 3) * 3;
    for(int i = bx; i < bx + 3; i++) {
        for(int j = by; j < by + 3; j++) {
            if(i == x && j == y) continue;
            if(board.at(i).at(j) == me) {
                // std::cout << x << " " << y << " - ";
                // std::cout << "반례\n";
                // for(int i = 0; i < 9; i++) {
                //     for(int j = 0; j < 9; j++) {
                //         std::cout << board[i][j] << " ";
                //     }
                //     std::cout << "\n";
                // }
                // std::cout << "======\n";
                return false;
            }
        }
    }
    return true;
}

void solve(std::vector<intlist> &board, std::vector<intlist> &blank, int stack) {
    if(stack == blank.size()) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << "\n";
        }
        solved = true;
        return;
    }
    else {
        
        int x = blank[stack][0];
        int y = blank[stack][1];
        for(int n = 1; n <= 9; n++) {
            board[x][y] = n;
            if(check(board, x, y)) {
                solve(board, blank, stack+1);
            }
            board[x][y] = 0;
            if(solved) return;
        }
    }
}

int main() {
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::vector<intlist> board(9, intlist(9));
    std::vector<intlist> blank;

    int number;
    intlist position(2);

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            std::cin >> number;
            board[i][j] = number;
            if(number == 0) {
                position[0] = i;
                position[1] = j;
                blank.push_back(position);
            }
        }
    }

    solve(board, blank, 0);

    return 0;
}