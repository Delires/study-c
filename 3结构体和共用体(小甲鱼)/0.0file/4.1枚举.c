/**
枚举是一种限制范围的变量取值，如星期就要限制只有七个，月份要限制十二个月
枚举定义
    enmun weekday
    {
     xxx,xxx,xxx,xxx,xxx,xxx
    }a,b,c;

    enmun
    {
     xxx,xxx,xxx,xxx,xxx,xxx
    }a,b,c;

注意：
    枚举值不能直接枚举元素赋值
**/
#include <stdio.h>

void main()
{
    enum weekday
    {sun, mon, tue, wed, thu, fri, sat} a,b,c;

    a = sun; //每一个枚举变量都代表一个序列，从0开始
    b = mon;
    c = tue;

    printf("%d, %d, %d", a, b, c);
    printf("\n\n");
}
