#include <iostream>

using namespace std;

int max(int a, int b){ 
    return (a > b)? a : b;
}

int main() {
    int n;
    int podo[10000]; // 포도주 양

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> podo[i];
    }

    int a[n] = {0}; // 포도주 연속 1회
    int b[n] = {0}; // 포도주 연속 2회
    int result = a[0] = podo[0];

    if(n >= 2) {
        a[1] = podo[1];
        b[1] = a[0] + podo[1]; // 2번째도 선택할 수 있다.
        result = max(a[0], b[1]);
    }

    /* 
    계단 오르기와 다른 점은... 굳이 1칸 띄어서 고를 필요가 없어졌다는 거.
    결국 i가 어떻든, a[i]나 b[i]가 최댓값을 가진다면 i가 1칸이 떨어졌든 2칸이 떨어졌든 상관 없다.
    */
    for(int i = 2; i < n; i++) {
        a[i] = max(max(a[i-2], b[i-2]) + podo[i], a[i-1]);
        b[i] = max(a[i-1] + podo[i], b[i-1]);
        result = max(a[i], max(b[i], result));
    }

    cout << result << "\n";

    return 0;
}