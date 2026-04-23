#include <iostream>

using namespace std;

int main() {
    bool reversed[10000] = {false};
    int cards[10000][2];
    int N, M;
    cin >> N >> M;
    
    int A, B;
    for(int i = 0; i < N; i++) {
        cin >> A >> B;
        cards[i][0] = A;
        cards[i][1] = B;
    }
    
    int K;
    for(int m = 0; m < M; m++) {
        cin >> K;
        for(int i = 0; i < N; i++) {
            int value = reversed[i]? cards[i][1] : cards[i][0];
            if(value <= K) {
                reversed[i] = !reversed[i];
            }
        }
    }
    
    int result = 0;
    for(int i = 0; i < N; i++) {
        int value = reversed[i]? cards[i][1] : cards[i][0];
        result += value;
    }
    
    cout << result << "\n";
    return 0;
}