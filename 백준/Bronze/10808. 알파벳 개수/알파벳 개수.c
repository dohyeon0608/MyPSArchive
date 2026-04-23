#include <stdio.h>

int main() {
    char cnt[26] = {0};
    char ch;
    
    while((ch = getchar()) != '\n')
        cnt[ch - 'a']++;
        
    for(int i = 0; i < 26; i++)
        printf("%d ", cnt[i]);

    return 0;
}