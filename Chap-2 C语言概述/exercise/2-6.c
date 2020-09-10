// 编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
// 要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区
// 分。

#include <stdio.h>

int main(void)
{
  int toes = 10;
  print("toes:%d\n", toes);
  printf("toes 的两倍：%d\n", toes * 2);
  printf("toes 的平方：%d\n", toes * toes);
  return 0;
}
