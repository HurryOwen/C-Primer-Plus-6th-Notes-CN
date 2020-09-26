#include <stdio.h>
int main(void)
{
  int *ptr;
  int *ptr2;
int torf[2][2] = {12, 14, 16};
int mine[2][2] = {{1,2},{3,4}};
ptr = torf[0];
ptr2 = mine[0];
  printf("%d, %d, %d,%d\n",*ptr, *(ptr+1), *(ptr+2), *(ptr+3));
  printf("%d, %d, %d\n",*ptr2, *(ptr2+1), *(ptr2+2));
  return 0;
}