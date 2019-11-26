/**
用extern声明外部变量，扩张程序文件的作用域
**/
#include <stdio.h>

int max(int x, int y)
{
    int z;
    z = x>y?x:y; //三目运算符 1?2:3
    return (z);
}

void main()
{
    extern A,B;//定义AB为全局变量即全局变量
    //试试去电
    printf("%d\n", max(A,B));
}

int A = -13, B = -8;//A,B是全局变量,所以在哪赋值都行
                   //如果不定义extern,只能在最上头定义，编译器从上往下
