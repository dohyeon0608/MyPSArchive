#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    int count = 0;
    char last[2] = {0};

    for(int i = 0; i < 101; i++) {
      char c = str[i];
      if(c == 0){
        break;
      }
      count++;
      char p1 = (last[1] == 'c' && c == '=');
      char p2 = (last[1] == 'c' && c == '-');
      char p3 = (last[1] == 'd' && c == '-');
      char p4 = (last[1] == 'l' && c == 'j');
      char p5 = (last[1] == 'n' && c == 'j');
      char p6 = (last[1] == 's' && c == '=');
      char p7 = (last[1] == 'z' && c == '=');
      char q1 = (last[0] == 'd' && last[1] == 'z' && c == '=');

      if(q1){ 
        count -= 2;
      }
      else if(p1 || p2 || p3 || p4 || p5 || p6 || p7){ 
        count -= 1;
      }
      
      last[0] = last[1];
      last[1] = c;
    }

    printf("%d\n", count);
    return 0;
}
  