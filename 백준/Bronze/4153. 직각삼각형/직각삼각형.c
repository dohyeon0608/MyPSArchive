#include <stdio.h>

int main() {
  int x = -1;
  int y = -1;
  int z = -1;
  int temp = 0;
  short result[30001];

  while(1) {
    scanf("%d %d %d", &x, &y, &z);
    if(x == 0 && y == 0 && z == 0) {
      break;
    }
    
    if(x*x + y*y == z*z || y*y + z*z == x*x || z*z + x*x == y*y) {
      result[temp] = 0;
    } else {
      result[temp] = 1;
    }
    temp++;
  }

  for(int i = 0; i < temp; i++) {
    if(result[i] == 0) {
      printf("right\n");
    } else {
      printf("wrong\n");
    }
  }
}
