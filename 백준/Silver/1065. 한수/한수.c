#include <stdio.h>

short han(int x) { // returns 0 if true
  int n = x;
  int digit = 0;
  while(n != 0) {
    n /= 10;
    digit++;
  }
  n = x;

  short isGetD = 0;
  int prv = -1;
  int d = 999;

  short isHansu = 0;
  for(int i = 0; i < digit; i++) {
    int d1 = prv - (n % 10);
    if(isGetD == 0) {
      if(prv != -1) {
        d = d1;
        isGetD = 1;
      }
    } else {
      if(d1 != d) {
        isHansu = 1;
        break;
      }
    }
    prv = n%10;
    n /= 10;
  }

  return isHansu;
}

int main(void) {
  int n = 0;
  scanf("%d", &n);
  int count = 0;
  for(int i = 1; i <= n; i++) {
    if(han(i) == 0) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
  