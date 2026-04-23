#include <stdio.h>
#include <string.h>

int main() {
  char n[2][10001];

  scanf("%s", n[0]);
  scanf("%s", n[1]);

  char result[10002] = {0};

  int maxIndex = (strlen(n[0]) > strlen(n[1]))? 0 : 1;
  int temp = 0;
  int end = strlen(n[maxIndex]) - 1; // result의 마지막 인덱스

  for(temp = 0; temp < strlen(n[maxIndex]); temp++) {
    int n0Digit = strlen(n[0]) - 1 - temp;
    int n1Digit = strlen(n[1]) - 1 - temp;

    int n0Number = (n0Digit >= 0)? n[0][n0Digit] - '0' : 0;
    int n1Number = (n1Digit >= 0)? n[1][n1Digit] - '0' : 0;

    int sum = n0Number + n1Number + result[temp]; // 자리수 총합 + 받아올림
    result[temp] = (sum % 10);
    result[temp+1] += sum / 10; // 받아올림 저장

    if((sum / 10) > 0 && ((temp + 1) == strlen(n[maxIndex]))) // 마지막이 받아올려졌다면
      end++;
    
  }

  short doZeroEnd = 0;

  for(int i = end; i >= 0; i--) {
    int n = result[i];
    if(!(!doZeroEnd && n == 0)) {
      printf("%d", result[i]);
      doZeroEnd = 1;
    }
  }

  return 0;
}