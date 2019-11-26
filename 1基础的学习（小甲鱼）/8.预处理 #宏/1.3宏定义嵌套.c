/**
宏定义 #define 宏名 字符串

宏定义允许嵌套，在宏定义里可以使用已经定义的宏名

宏名一般为大写字母，定义宏不加分号，写在函数外
#endef结束宏的区域
**/

#include <stdio.h>

#define PI 3.1415926
#define S PI*r*r       //第一个宏定义的PI嵌套在第二个宏定义里

void fun(void);  //声明一个不用给参数的函数

void main()
{
    double s, r;
    scanf("%lf", &r);

    s = S;
    //编译是S替换成PI*r*r PI再替换成3.1415926

    printf("area = %g\n\n", s);

    fun();
}

void fun(void)  //定义不用给参数但有返回的函数
{
    printf("%lf", PI);
}
