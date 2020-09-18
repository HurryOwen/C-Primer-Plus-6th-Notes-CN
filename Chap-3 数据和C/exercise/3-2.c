/**
 * 2.编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印 输入的字符。
 */
#include <stdio.h>
int main(void){
  int input;
  printf("Enter a value fo char in ASCII:");
  scanf("%d",&input);
  printf("Your input value is %d, and char is %c\n",input,input); // 通过转换符%d与%c打印整型数值和字符
  return 0;
}