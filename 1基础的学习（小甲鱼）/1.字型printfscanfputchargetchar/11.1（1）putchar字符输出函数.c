/* putcharh函数:字符输出函数    putchar+()+'' */
/* 必须要有头文件#include<stdio.h> */
/* 换行必须另起一行输入 putchar('\n')  不能组合*/
/* 括号内输入 \数字 对应八进制数所对应的asc码*/

#include <stdio.h>
void main()
{
    putchar('A');   /* 显示A */
    putchar('\n');  /* 换行  */
    putchar('x');   /* 显示x */
    putchar('\n');  /* 换行  */
    putchar('\101');/* 显示A  \101八进制数=65十进制数=ASC码表的A */
}
