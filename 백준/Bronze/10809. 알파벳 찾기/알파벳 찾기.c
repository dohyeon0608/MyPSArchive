#include <stdio.h>

int main(void) {
    char str[101];
    char result[26];
    scanf("%s", str);
    
    for(int i = 0; i < 26; i++) { // 초기화
        result[i] = -1;
    }
    
    for(int i = 0; i < 101; i++) {
        char chr = str[i];
        if(chr == 0)
            break;
        if(result[chr-'a'] == -1) {
            result[chr-'a'] = i;
        }
    }
    
    for(int i = 0; i < 26; i++) { // 출력
        printf("%d ", result[i]);
    }
}