#include <iostream>

using namespace std;

int main(void) {
    int n, x, temp;
    bool visited[730] = {false};

    cin >> n;
    x = n;
    if(n <= 730) visited[n] = true;
    
    while(true) {
        temp = x;
        x = 0;

        while(temp > 0) {
            x += (temp % 10) * (temp % 10);
            temp /= 10;
        }

        if(x == 1) {
            cout << "HAPPY";
            break;
        } else if(visited[x]) {
            cout << "UNHAPPY";
            break;
        }

        visited[x] = true;
    }
    
    return 0;
}