#include <iostream>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    if(M <= 2) cout << "NEWBIE!";
    else if (M <= N) cout << "OLDBIE!";
    else cout << "TLE!";
    return 0;
}