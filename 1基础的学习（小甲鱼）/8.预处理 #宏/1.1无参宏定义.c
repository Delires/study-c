/**
无参宏定义，即宏名后(字符串处)不带参数
    #define 标识符 字符串                  如：#define pi 3.1415926

    #        表述预处理命令
    define   宏定义命令
    标识符   宏名
    字符串   可以是常数,表达式等
**/
#include <stdio.h>
#define PI 3.1415926 //无参宏定义PI,宏定义后不加分号

void main()
{
    int r;
    double s;

    printf("please intput r:\n");
    scanf("%d", &r);

    s = r*r*PI;
    printf("%g", s);// %g是万能格式
}
