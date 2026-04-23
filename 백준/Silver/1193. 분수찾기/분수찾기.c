#include <stdio.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  int x = 1;
  int y = 1;
  short dir = 0;
  // if value is 0, it will move to left, but value is 1, it will move to right.

  for(int i = 0; i < n-1; i++) {
    // printf("loop %d, pos(%d, %d), dir=%d\n", i, x, y, dir);
    if(dir == 0) {
      if(x == 1) {
        dir = 1;
        y += 1;
      } else {
        x -= 1;
        y += 1;
      }
    } else if(dir == 1) {
      if(y == 1) {
        dir = 0;
        x += 1;
      } else {
        x += 1;
        y -= 1;
      }
    }
  }

  printf("%d/%d\n", x, y);
}
  