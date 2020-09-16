/***
 * 3.编写一个程序，发出一声警报，然后打印下面的文本：
 * Startled　by　the　sudden　sound,　Sally　shouted, 
 * "By　the　Great　Pumpkin,　what　was　that!"
 */ 
#include <stdio.h>
int main(void){
  char ch = '\a';
  printf("%c",ch);//输出字符'\a'，该字符表示警报，但部分系统可能无法发声。
  printf("Startled　by　the　sudden　sound,　Sally　shouted, \n");
  printf("\"By　the　Great　Pumpkin,　what　was　that!\"\n");
  return 0;

}