/* getchar字符输入函数 功能为从键盘上输入一个字符*/
/* 形式为：getchar(); */
/* 通常把 输入字符 赋给 一个字符变量 如 char c; c=getchar();*/
/* getchar scanf 这种输入都是在编译器输入的，要在编译器里再操作 */

#include <stdio.h>
void main()
{
    char c;         /* 定义c为字符型变量 */
    printf("intput a character\n"); /* 打印出 输出一个字符 英文*/
    c = getchar();  /* getchar字符输入函数，输入一个字符给c 但会在编译器显示*/
    putchar(c);    /* 输出c */


}
