#include <stdio.h>
#include <string.h>
#define DOCUMENT_LENGTH 2500
#define WORD_LENGTH 50

int main(void) {
    // 메모리에 여유를 두자.
    char document[DOCUMENT_LENGTH+5];
    char word[WORD_LENGTH+5];

    fgets(document, DOCUMENT_LENGTH+5, stdin);
    fgets(word, WORD_LENGTH+5, stdin);

    // 개행 문자 제거 개선
    document[strcspn(document, "\r\n")] = '\0';
    word[strcspn(word, "\r\n")] = '\0';

    size_t document_size = strlen(document);
    size_t word_size = strlen(word);

    if(word_size == 0 || document_size < word_size) {
        printf("0");
        return 0;
    }

    int result = 0;

    for(int i = 0; i <= document_size - word_size; ) {
        if(strncmp(word, document + i, word_size) == 0) {
            i += word_size;
            result++;
        } else {
            i++;
        }
    }

    printf("%d", result);
    
    return 0;
}