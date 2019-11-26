 /*
输入一个字符，判断是否是大写字母，如果是转换成小写字母。不是,直接输出
*/
/*
自己思路
字符型 肯定要定义char
if else语句
asc码大写字母＋32=小写字母
如何判断是否为大写字母？看定义是否在'A''Z'之间 FUCK>='A'&&FUCK<='Z'
*/
#include <stdio.h>
void main()
{                   //所有的程序都在这个大框框内
  char fuck;
  scanf("%c", &fuck);
  if(fuck>='A'&&fuck<='Z')
  {
      printf("%c\n", fuck+32);
  }
  else
  {
      printf("%c\n", fuck);
  }
}
