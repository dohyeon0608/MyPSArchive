#include <stdio.h>

int main(void) {
    int kg;
    scanf("%d", &kg);

    int samkg = 0; //삼kg
    int okg = 0; //오kg

    // 초기 설정 : 최대한 뺄 수 있는 5kg를 뺀다. (5kg를 빼야 개수가 최소로 줄어든다.)
    okg = kg / 5;
    kg -= okg * 5;

    int canMake = 1; // Nkg을 만들 수 있는가 여부

    while(1) {
        while(kg >= 3) { // 나머지 3kg의 포대를 가져가도록 한다.
            samkg++;
            kg -= 3;
        }

        if(kg == 0) { // 만약 모든 것을 가져갔다면 종료
            break;
        }

        // 아직 남아있다면
        okg--; // 5kg의 포대를 다시 돌려놓는다.
        kg += 5;

        if(okg < 0) { // 만약 뺼 수 있는 모든 5kg를 뺐음에도, 남아있다면 만들기가 불가능하다.
            canMake = 0;
            break;
        }
    }

    if(canMake) {
        printf("%d", samkg + okg);
    } else {
        printf("-1");
    }

    // // 디버그
    // printf("\n3kg %d개와 5kg %d개입니다.", samkg, okg);

    return 0;
}