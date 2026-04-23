#include <stdio.h>
#define M 9901

// 행렬 제곱을 이용해보자.

int modulo_plus(int a, int b) {
    return ((a % M) + (b % M)) % M;
}

typedef struct {
    int m[2][2];
} Matrix; // 행렬을 구조체로 다루는 게 편하다는 조언 반영 (배열과 달리 복사 / 반환 가능)

Matrix multiply(Matrix A, Matrix B) {
    Matrix res = {{{0, 0}, {0, 0}}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res.m[i][j] = modulo_plus(A.m[i][k] * B.m[k][j], res.m[i][j]);
            }
        }
    }
    return res;
}

Matrix power(Matrix A, int n) {
    Matrix res = {{{1, 0}, {0, 1}}};
    while (n > 0) {
        if (n % 2 == 1) {
            res = multiply(res, A);
        }
        A = multiply(A, A);
        n /= 2;
    }
    return res;
}

int main(void) {
    int n;
    scanf("%d", &n);

    Matrix P = {{{1, 2}, {1, 1}}};
    Matrix Pn = power(P, n);

    int result = modulo_plus(Pn.m[0][1], Pn.m[1][1]);

    printf("%d", result);

    return 0;
}