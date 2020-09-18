
// 7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立
// 方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
// 传递给该函数。

#include <stdio.h>
int main(void)
{
  double num;
  printf("Please enter a number:\n");
  scanf("%lf", &num);
  printf("The cube of %f is %f\n", num, cube(num));
  return 0;
}

double cube(double num)
{
  return num * num * num;
}