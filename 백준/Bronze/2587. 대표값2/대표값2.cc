#include <iostream>

using namespace std;

int main() {
    int numbers[5], i;
    int sum = 0;
    
    // input
    for(i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i]; // sum
    }
    
    // bubble sort
    for(i = 1; i < 5; i++) {
        for(int j = 1; j < 6 - i; j++) {
            if(numbers[j-1] > numbers[j]) {
                // swap
                int temp;
                temp = numbers[j-1];
                numbers[j-1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    cout << sum / 5 << "\n" << numbers[2] << "\n";

    return 0;
}