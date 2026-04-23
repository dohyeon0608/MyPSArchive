#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T-- > 0) {
        int N, M;
        scanf("%d %d", &N, &M);
        // 실제 문서번호는 +1함. (나중에는 -1으로 원래대로)

        int imp[100] = {0};
        int queue[100] = {0};
        int result = 0;

        for(int i = 0; i < N; i++) {
            scanf("%d", &imp[i]);
            queue[i] = i+1;
        }

        char doSearch = 1;

        while(doSearch) {
            // 최대 중요도 찾아내기
            int maxImp = 0;
            for(int i = 0; i < N; i++) {
                maxImp = (imp[i] > maxImp)? imp[i] : maxImp;
            }

            int tempNo = queue[0];
            int tempImp = imp[0];

            char doPush = imp[0] != maxImp;

            // pop
            for(int i = 0; i < N-1; i++) {
                queue[i] = queue[i+1];
                // printf("queue[%d] = %d\n", i, queue[i+1]);
                imp[i] = imp[i+1];
            }
            N--;

            if(doPush) {
                // push
                queue[N] = tempNo;
                imp[N] = tempImp;
                N++;
            } else {
                result++;
                doSearch = (tempNo - 1 != M);
                
            }
        }
        printf("%d\n", result);
    }

    return 0;
}