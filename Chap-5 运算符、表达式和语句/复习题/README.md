### 1.假设所有变量的类型都是 int，下列各项变量的值是多少：

- a.`x = (2 + 3) * 6;` **x=30**
- b.`x = (12 + 6)/2*3;` **x=27**
- c.`y = x = (2 + 3)/4;` **x=y=1**
- d.`y = 3 + 2*(x = 7/2);` **x=3,y=9**

### 2.假设所有变量的类型都是 int，下列各项变量的值是多少：

- a.`x = (int)3.8 + 3.3;` **x=6**
- b.`x = (2 + 3) * 10.5;` **x=52**
- c.`x = 3 / 5 * 22.0;` **x=0**
- d.`x = 22.0 * 3 / 5;` **x=13**

### 4.请找出下面的程序中的错误。

```
int　main(void)
{
int　i　=　1,
float　n;
printf("Watch　out!　Here　come　a　bunch　of　fractions!\n");
while　(i　<　30)
n　=　1/i;
printf("　%f",　n);
printf("That's　all,　folks!\n");
return;
}
```

改正后

```
#include <stdio.h>
int main(void)
{
  int i = 1;
  float n;
  printf("Watch　out!　Here　come　a　bunch　of　fractions!\n");
  while(i < 30)
  {
    n = 1.0/i;
    printf(" %f\n",n);
    i++;
  }
  printf("That's　all,　folks!\n");
  return 0;
}
```
