### 1.指出下面各种数据使用的合适数据类型（有些可使用多种数据类型）： 
- a.East Simpleton的人口 **unsigned short**
- b.DVD影碟的价格 **float、double float**
- c.本章出现次数最多的字母 **char**
- d.本章出现次数最多的字母次数 **unsigned**

### 2.在什么情况下要用long类型的变量代替int类型的变量？
1、超出了int的范围，但没有超出long的范围.
2、保证在所有系统上都**至少是32位**的，提高程序的可移植性.

### 3.使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？
如果要正好获得32位的整数，可以使用int32_t类型。要获得可储存至少32位整数的最小类型，可以使用int_least32_t类型。如果要为32位整数提供最快的计算速度，可以选择int_fast32_t。
### 4.指出下列常量的类型和含义（如果有的话）：
- a.'\b' **char**
- b.1066  **int**
- c.99.44 **float**
- d.0XAA **unsigned int,16进制**
- e.2.0e30 **double float**

### 5.Dottie Cawm编写了一个程序，请找出程序中的错误。
```
include　<stdio.h>
 main (
   float　g;　
   h; 
   float　tax,　rate; 
   g　=　e21; 
   tax = rate*g; 
   )
```
改正后
```
include　<stdio.h>
 int main(void)
 {
   float　g, h; 
   float　tax,rate; 
   rate = 0.08; // 使用前需要给rate赋值
   g　=　1.0e5; 
   tax = rate*g; 
   h = g + tax;
   return 0;
 }
```

### 11.指出下列转义序列的含义：
 - a.\n **换行**
 - b.\\ **反斜杠字符**
 - c.\" **双引号字符**
 - d.\t **制表字符**
