#include <stdio.h>
void main()
{
    float PI = 3.14159; /*定义pi为浮点   型变量单精度float  浮点型常量3.14159*/
    int s, r = 5;       /*定义sr为整型变量基本型int 整形常量为5*/
    s = r*r*PI;         /*乘法啦，算出来的值再赋值给s*/
    printf("s = %d\n", s); /*打印出s*/
}
/* float PI 就是 double PI的意思，因为浮点型如何定义，系统都会默认为双精度double型*/
/* PI为浮点型 s，r为实型，但由于 赋值运算中，赋值号=右边的将会转化为左边的*/
                                            /* 所以算出来的是整形数据，社区了小数部分*/

/* 虽然定义了 int s = 5  但目的在于定义s是整型基本型，而不是定义数值*/
/* 所以，s是几不重要，最后算出的值都会赋给s  */
