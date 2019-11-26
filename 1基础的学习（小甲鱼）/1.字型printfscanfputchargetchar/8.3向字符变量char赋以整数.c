#include <stdio.h>
void main()
{
    char a, b;
    a = 'c';    /* a = ‘x’ 显示的char输出的%d就是120*/
    b = '@ ';    /* b = ‘y’ 显示的char输出的%d就是121*/
    printf("%C, %c\n", a, b);  /*%c 字符型char 输出的字符串为%c*/
    printf("%d, %d\n", a, b);  /*%d 整形int/short/long/unsigned 输出的字符串为%d */
}                              /*print（“\n”, , ）*/

/* 定义a，b为字符型常量char*/
/* 给a，b赋值整数*/
/* 把a，b的值用字符型%c的量打印出来  x的ASC码是120 y的ASC码是121*/
/* 把a，b的值用整数型%d的量打印出来  120 121*/

 /*字符型的符号都对应一个数（ASC码），要查表得知 */
 /*同理，定义a，b为字符串 ‘x’ ‘y’ %d 打印出来的就是数字*/

 /*注意 字符串两端必须要有‘’ */
 /*没有‘’会被编译器当作一个没有赋值的代码*/
