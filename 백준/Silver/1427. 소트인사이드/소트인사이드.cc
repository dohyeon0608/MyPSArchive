#include <iostream>

using namespace std;

int main() {
    char N[11];
    int length = 0;
    
    cin >> N;
    
    // length
    for(int i = 0; N[i] != '\0'; i++) {
        length++;
    }
    
    // bubble sort
    for(int i = length - 1; i > 0; i--) {
        for(int j = length - 1; j > length - 1 - i; j--) {
            if(N[j-1] < N[j]) {
                // swap
                char temp = N[j-1];
                N[j-1] = N[j];
                N[j] = temp;
            }
        }
    }
    
    cout << N;

    return 0;
}