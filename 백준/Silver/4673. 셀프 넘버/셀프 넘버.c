#include <stdio.h>

int d(int x) {
  int n = x;
  int digit = 0;
  int result = x;
  while(n != 0) {
    n /= 10;
    digit++;
  }
  n = x;
  for(int i = 0; i < digit; i++) {
    result += n % 10;
    n /= 10;
  }
  return result;
}

int main(void) {
  char num[10001] = {0};
  for(int n = 1; n <= 10000; n++) {
    if(num[n-1] != 1) {
      int a = n;
      while(1) {
        a = d(a);
        if(a > 10000) {
          break;
        }
        num[a-1] = 1;
      }
    }
  }
  for(int n = 0; n < 10000; n++) {
    if(num[n] != 1) {
      printf("%d\n", n+1);
    }
  }
  return 0;
}
