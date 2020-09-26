## 1.下面的程序将打印什么内容？
```
#include <stdio.h>
int main(void)
{
  int ref[] = { 8, 4, 0, 2 };
  int *ptr;
  int index;
  for (index = 0, ptr = ref; index < 4; index++, ptr++)
  printf("%d %d\n", ref[index], *ptr);
  return 0;
}
```
打印内容：
```
8 8
4 4
0 0
2 2

```

## 2、在复习题1中，ref有多少个元素？
4个

## 3、在复习题1中，ref的地址是什么？？ref+1是什么意思？++ref指向什么？
ref的地址是数组第一个元素的存储地址
ref + 1的意思是 ref + 1 * 8(int类型的字节数)，也就是指向第二个元素
++ref无效，ref是一个常量。

## 4.在下面的代码中，ptr和(ptr + 2)的值分别是什么？
a.
```
int *ptr;
int torf[2][2] = {12, 14, 16};
ptr = torf[0];
```
*ptr = 12; *(ptr+2) = 16
