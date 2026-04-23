#include <stdio.h>

int N;
int S, M, L, XL, XXL, XXXL;
int T, P;

int sets(int count) {
    return count / T + (count % T != 0);
}

int main() {    

    scanf("%d", &N);
    scanf("%d %d %d %d %d %d", &S, &M, &L, &XL, &XXL, &XXXL);
    scanf("%d %d", &T, &P);

    int TSets = sets(S)+sets(M)+sets(L)+sets(XL)+sets(XXL)+sets(XXXL);
    
    printf("%d\n", TSets);
    printf("%d %d\n", N/P, N%P);

    return 0;
}