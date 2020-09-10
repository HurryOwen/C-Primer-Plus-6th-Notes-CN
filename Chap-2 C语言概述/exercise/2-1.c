// 编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。
// 再调 用一次 printf()函数，把你的姓名分别打印在两行。
// 然后，再调用两次printf() 函数，把你的姓名打印在一行。
// 输出应如下所示（当然要把示例的内容换成 你的姓名）：
// Emma Ou        <- 第一次打印的内容
// Emma            <- 第二次打印的内容
// Ou              <- 第二次打印的内容
// Emma Ou        <- 第三次和第四次打印的内容

#include <stdio.h>

int main(void)
{
  printf("Emma Ou\n");
  printf("Emma\nOu\n");
  printf("Emma");
  printf("Ou\n");
}