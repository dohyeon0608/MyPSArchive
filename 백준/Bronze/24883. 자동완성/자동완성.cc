#include <iostream>

using namespace std;

int main() {
    char x;
    cin >> x;
    
    if(x == 'N' or x == 'n') {
        cout << "Naver D2";
    } else {
        cout << "Naver Whale";
    }

    return 0;
}