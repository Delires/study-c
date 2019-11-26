/**
带参宏 和 带参函数 虽然用法很相像,但处理统一表达式可能会截然不同
带参函数定义
**/
#include <stdio.h>

void main()
{
    int i=1;
    int SQ(int y); //声明函数

    while(i <=5 )
    {
        printf("%d\n", SQ(i++) );//i值赋给y代入函数
    }
}
int SQ(int y)//定义函数
{
    return( (y)*(y) );
}
