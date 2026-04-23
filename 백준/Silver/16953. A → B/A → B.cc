#include <iostream>

using namespace std;

/*
2를 곱한다. -> 결과는 무조건 짝수
1을 수의 가장 오른쪽에 추가한다. -> 결과는 무조건 홀수
이를 이용하여 문제를 푼다.
*/

int main(void) {
    int A, B;
    cin >> A >> B;
    int result = 1;

    while(true) {
        if(B < A) {
            // 더 줄일 수 없다.
            result = -1;
            break;
        } else if(B == A) {
            // 만드는 데 성공함!
            break;
        } else if(B % 2 == 0) {
            // 짝수라면 2로 나눈다.
            B /= 2;
            result++;
        } else if(B % 10 == 1) {
            // 끝에 1이 붙어있다면 1을 뗀다.
            B /= 10;
            result++;
        } else {
            // 위 경우에 해당하지 않는다면 만들 수 없다.
            result = -1;
            break;
        }
    }

    cout << result << "\n";

    return 0;
}