#include <iostream>

using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    
    int scores[1000];
    for(int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    
    // bubble sort
    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < (N - 1) - i; j++) {
            if(scores[j] > scores[j+1]) {
                // swap
                int temp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = temp;
            }
        }
    }
    
    cout << scores[N-k];

    return 0;
}