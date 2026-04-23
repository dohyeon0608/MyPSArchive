#include <iostream>

using namespace std;

// 루트n이 자연수라면 n의 약수의 개수는 홀수이다.

int main() {
    int N;
    cin >> N;
    
    int result = 0;
    
    for(int i = 1; i*i <= N; i++) result++;
    
    cout << result << "\n";

    return 0;
}