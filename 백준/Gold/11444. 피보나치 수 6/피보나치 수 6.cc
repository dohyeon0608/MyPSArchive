#include <iostream>
#define Q 1000000007

using namespace std;

// 행렬 곱셈을 이용하여 구현하기. (10830번 코드 재사용)
// A={{0, 1},{1, 1}}라 두면, A^N의 0행 1열 또는 1행 0열의 원소가 N번째 피보나치 수가 된다. (실험적으로 얻음.. 더 공부해야겠다)

long long int N;

int A[2][2] = {0, 1, 1, 1};
int result[2][2] = {0, 1, 1, 1};
int temp[2][2];

void save_temp() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = temp[i][j];
        }
    }
}

void square() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            long long res = 0;
            for(int k = 0; k < 2; k++) {
                res += (long long)result[i][k] * result[k][j];
                res %= Q;
            }
            temp[i][j] = res;
        }
    }
    save_temp();
}

void times_once() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            long long res = 0;
            for(int k = 0; k < 2; k++) {
                res += (long long)result[i][k] * A[k][j];
                res %= Q;
            }
            temp[i][j] = res;
        }
    }
    save_temp();
}

void print_result() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}

void pow(long long n) {
    if(n == 1) {
        return;
    } else {
        pow(n / 2);
        square();
        if(n % 2 == 1) times_once();
    }
}


int main() {
    cin >> N;

    if(N == 0) cout << 0 << "\n";
    else {
        pow(N);

        cout << result[0][1] << "\n";
    }
    return 0;
}