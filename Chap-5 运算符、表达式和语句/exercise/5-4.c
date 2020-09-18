/*
* 4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘
米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身
高，直到用户输入一个非正值。其输出示例如下：
Enter　a　height　in　centimeters:　182
182.0　cm　=　5　feet,　11.7　inches
Enter　a　height　in　centimeters　(<=0　to　quit):　168.7
168.0　cm　=　5　feet,　6.4　inches
Enter　a　height　in　centimeters　(<=0　to　quit):　0
bye
*/
#include <stdio.h>

#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12.0

#define SEVEN 60

int main(void)
{
  int feet;
  double input, inches, minches;
  printf("Enter a height in centimeters");
  scanf("%d", &input);
  while (input > 0)
  {
    inches = input / CM_PER_INCH;
    feet = inches / INCH_PER_FEET;
    minches = inches - (feet * INCH_PER_FEET);
    printf("%.1f cm = %.1f feet, %.1f inches\n", input, feet, minches);
    printf("Enter a height in centimeters:(<=0　to　quit)");
    scanf("%d", &input);
  }
  printf("bye\n");
  return 0;
}