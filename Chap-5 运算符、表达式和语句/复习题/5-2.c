#include <stdio.h>
int main(void)
{
  int x;
  x = (int)3.8 + 3.3;
  printf("%d\n", x);
  x = (2 + 3) * 10.5;
  printf("%d\n", x);
  x = 3 / 5 * 22.0;
  printf("%d\n", x);
  x = 22.0 * 3 / 5;
  printf("%d\n", x);
  return 0;
}