
#include <stdio.h>

int main(void)
{
  int x,y,*ponteiro;
  x=100;
  y=22;
  ponteiro = &x;
  *ponteiro = y;
  printf("%i %i",x,y);
  
    return 0;
}
