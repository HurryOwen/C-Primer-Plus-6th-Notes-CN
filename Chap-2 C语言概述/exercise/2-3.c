// 编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考
// 虑闰年的问题

#include <stdio.h>

int main(void)
{
  int age = 26;
  int days = age * 365;
  printf("my age is %d, equals days %d\ns", age, days);
  return 0;
}