#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::queue<int> progress;

    int N;
    std::cin >> N;

    int p_len = 1;
    progress.push(N);
    int x = 0;
    int len = 0;
    int result = 0;

    while(x != 1) {
        len = 0;
        while(p_len-- > 0) {
            x = progress.front();
            if(x == 1) break;
            if(x % 3 == 0) {
                progress.push(x / 3);
                len++;
            }
            if(x % 2 == 0) {
                progress.push(x / 2);
                len++;
            }
            progress.push(x - 1);
            len++;
            progress.pop();
        }
        p_len = len;
        result++;
    }

    std::cout << (result - 1) << "\n";
    return 0;
}