/*
* 3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例
如，用户输入18，则转换成2周4天。以下面的格式显示结果：
18 days are 2 weeks, 4 days.
通过while循环让用户重复输入天数，当用户输入一个非正值时（如0
或-20），循环结束。
*/
#include <stdio.h>

#define SEVEN 60

int main(void)
{
  int minNum;
  printf("Please input days:");
  scanf("%d", &minNum);
  while (minNum > 0)
  {
    printf("%d days are %d weeks and %d days", minNum, minNum / SEVEN, minNum % SEVEN);
    printf("Please input days:");
    scanf("%d", &minNum);
  }
  return 0;
}