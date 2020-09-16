/*
*1.通过试验（即编写带有此类问题的程序）观察系统如何处理整数上 溢、浮点数上溢和浮点数下溢的情况。
*/

/*
*分析：
*由于系统内对数据的存储和操作处理等原因，每一种数据都有其最大和最小限制。实际编程当中应当充分考虑自己程序的需求，使用合适的数据类型。
*如果超过数据的限制，则会发生不可预期的错误。
*C语言在limits.h和float.h头文件里预定义了常见数据类型的限制。例如，float类型的最大值就是FLT_MAX,int类型的最大值就是INT_MAX。
*下面的代码大致展示了越界、精度限制和系统预定义的最值。
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void){
  int big_int = 2147483647; // 有符号整型数据最大值是2的31次方-1
  float big_float = 3.4e38; // 浮点型数据的最大值一般为3.4E38
  float small_float = 10.0/3; // 浮点型数据的有效位数为6位
  printf("The big int data is %d\n",big_int+1); // 整数型最大值加1，会溢出，结果为-2147483648
  printf("The big float data is %f\n", big_float*10); //浮点型最大数据乘10造成越界，输出inf。如果浮点数据只加1个小数据，由于其精度限制，不会造成越界。
  printf("The big float data is %f\n", small_float);// 打印3.333333,小数位只有6位，有精度损失
  printf("The MAX float data is %f\n",FLT_MAX); // FLT_MAX:340282346638528859811704183484516925440.000000
  printf("The MAX int data is %d\n", INT_MAX); // INT_MAX:2147483647
  return 0;
}