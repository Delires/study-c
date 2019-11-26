/**
定义形式为:
    #define 宏名(形参表) 字符串
调用形式为:
     宏名(实参表)
**/
#include <stdio.h>

#define MAX(a,b) a>b?a:b //定义带参宏 (a,b)是形参表

void main()
{
    int x, y, max;

    printf("intput two number:\n");
    scanf("%d %d", &x, &y);

    max = MAX(x,y); //调用 (x,y)实参表，函数是传递值,这是直接替换
                    //只要出现MAX(),宏就会自动替换，x,y赋给a,b再用宏替换这个
    printf("max is %d", max);
}
