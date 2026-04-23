#include <iostream>

using namespace std;

int main() {
    int Sab, Fab;
    cin >> Sab >> Fab;

    if(Fab < Sab) {
        cout << "flight\n";
    } else {
        cout << "high speed rail\n";
    }
    return 0;
}