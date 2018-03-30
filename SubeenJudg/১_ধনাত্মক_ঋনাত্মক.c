#include <stdio.h>

int main() {
  int line_num, i, pos = 0, neg = 0, num;
  scanf("%d",&line_num);

  for (i = 0; i < line_num; i++) {

    scanf("%d",&num);

    if(num < 0){

      neg = neg + 1;
    }
    else{
      pos = pos + 1;
    }
  }
  printf("%d %d\n",pos, neg);
  return 0;
}
