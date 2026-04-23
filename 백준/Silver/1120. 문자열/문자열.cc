#include <iostream>
#include <string>

using namespace std;

// 핵심: 1. 최대한 겹치는 부분을 찾는다. 2. 남은 부분은 B와 똑같은 알파벳으로 채운다.

int main(void) {
    string A, B;
    cin >> A >> B;
    
    int Al = A.length();
    int Bl = B.length();
    
    int result = Bl, temp = 0;
    for(int i = 0; i <= Bl-Al; i++) {
        temp = 0;
        for(int j = 0; j < Al; j++) {
            if(A[j] != B[i+j]) temp++;
        }
        if(temp < result) result = temp;
    }
    
    cout << result;
    return 0;
}