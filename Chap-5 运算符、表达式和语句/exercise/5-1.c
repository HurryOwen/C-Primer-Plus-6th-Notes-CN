/*
*1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
间。使用#define或const创建一个表示60的符号常量或const变量。通过while
循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
*/
#include <stdio.h>

#define SIXTY 60

int main(void)
{
  int minNum;
  printf("Please Enter minutes:");
  scanf("%d", &minNum);
  while (minNum > 0)
  {
    printf("%d minutes equal %d hour and %d minutes", minNum, minNum / SIXTY, minNum % SIXTY);
    printf("Please Enter minutes:");
    scanf("%d", &minNum);
  }
  return 0;
}