#include <iostream>
#define Q 1000

using namespace std;

int N;

int A[5][5];
int result[5][5];
int temp[5][5];

void save_temp() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            result[i][j] = temp[i][j];
        }
    }
}

void square() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int res = 0;
            for(int k = 0; k < N; k++) {
                res += result[i][k] * result[k][j];
                res %= Q;
            }
            temp[i][j] = res;
        }
    }
    save_temp();
}

void times_once() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int res = 0;
            for(int k = 0; k < N; k++) {
                res += result[i][k] * A[k][j];
                res %= Q;
            }
            temp[i][j] = res;
        }
    }
    save_temp();
}

void print_result() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
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
    long long B;

    cin >> N >> B;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
            result[i][j] = A[i][j] % Q; // 입력 시 1000의 나머지를 저장하도록 수정
        }
    }

    pow(B);

    print_result();
    return 0;
}