#include <stdio.h>

int main() {
  int a,b,v,d;
  scanf("%d %d %d", &a, &b, &v);

  d = v / (a-b);
  while((d-1) * (a-b) + a >= v) {
    d--;
  }
  if((a-b) * d + a >= v) d++;

  printf("%d\n", d);
}
  