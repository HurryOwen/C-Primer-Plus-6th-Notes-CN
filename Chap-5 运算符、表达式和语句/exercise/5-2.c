/*
* 2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
* 10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和
* 15）。要求打印的各值之间用一个空格、制表符或换行符分开
*/

#include <stdio.h>

int main(void)
{
  int num, plus10;
  printf("Please input a number:");
  scanf("%d", &num);
  plus10 = num + 10;
  while (num <= plus10)
  {
    printf("%d\n", num);
    num++;
  }
  return 0;
}