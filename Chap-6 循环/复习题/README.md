### 1.写出执行完下列各行后 quack 的值是多少。后 5 行中使用的是第 1 行 quack 的值。

- `int quack = 2;` **2**
- `quack += 5;` **7**
- `quack *= 10;` **70**
- `quack -= 6;` **64**
- `quack /= 8;` **8**
- `quack %= 3;` **2**

### 2.假设 value 是 int 类型，下面循环的输出是什么？如果 value 是 double 类型，会出现什么问题？

```
for (value　=　36;　value　>　0;　value　/=　2)
printf("%3d",　value);
```

**依次输出` 36`、` 18`、` 9`，` 4`，` 2`，` 1`。**
如果是 double 类型，会无限循环直到精度不足，下溢为 0。且转换说明`%3d`也不准确

### 6. 编写一个程序打印下面的图案，要求使用嵌套循环：

```
$$$$$$$$
$$$$$$$$
$$$$$$$$
```

```
#include <stdio.h>
#define ROWS 3
#define COUNT 8

int main(void)
{
  const char ch = '$';
  int i, j;
  for (i = 0; i < ROWS; i++)
  {
    for (j = 0; j < COUNT; j++)
    printf("%c", char);
    printf("\n");
  }
  return 0;
}
```
