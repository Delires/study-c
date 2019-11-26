/* putcharh函数:字符输出函数    putchar+()+'' */
/* 必须要有头文件#include<stdio.h> */
/* 换行必须另起一行输入 putchar('\n')  不能组合*/
/* 空格(tab键)必须另起一行输入 putchar('\t')  不能(%d\n)这种组合输入*/
/* 括号内输入 \数字 对应八进制数所对应的asc码*/

#include <stdio.h>
void main()
{
    char a='b', b='o', c='k';/*定义adc分别为字符变量bok*/
    putchar(a); putchar(b); putchar(b); putchar(c); putchar('\t');
    /*打印出book  ('\t')相当于tab键 空一大行的意思*/
    putchar(a); putchar(b);   /* 打印bo */
    putchar('\n');            /* 换行  */
    putchar(b);putchar(c);    /* 打印ok */

}
