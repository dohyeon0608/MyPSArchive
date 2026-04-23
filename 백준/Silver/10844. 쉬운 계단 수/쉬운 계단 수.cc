#include <iostream>
#include <vector>
#define M 1000000000

using namespace std;

int N;

int main(void) {
    cin >> N;
    
    // 각 숫자의 끝자리 개수 (End Of Numbers)
    // [새 계단수] = [기존 계단수] 뒤에 [계단수를 만들 수 있는 수] 붙인 것
    int eon[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int result = 0;
    
    for(int i = 2; i <= N; i++) {
        int new_eon[10];
        new_eon[0] = eon[1];
        new_eon[9] = eon[8];
        for(int j = 1; j <= 8; j++) {
            new_eon[j] = (eon[j-1]%M + eon[j+1]%M)%M; 
        }
        for(int j = 0; j <= 9; j++) {
            eon[j] = new_eon[j]; 
        }
    }
    
    for(int i = 0; i <= 9; i++) {
        result = (result + eon[i]%M)%M;
    }
    
    cout << result << "\n";
    
    return 0;
}