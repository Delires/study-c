/**
在交换 指针变量p1p2，用交换地址来达到交换值得目的
把这个交换过程变成一个函数
**/
#include <stdio.h>

int exchange(int *m, int *n);//声明函数,变量要和常量个数相等
            //定义的时候声明指针变量要有*
void main()
{
    int a, b;
    int *p1, *p2;

    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;//定义时*

    exchange(p1, p2);//对p1，p2使用函数

    printf("%d %d\n", a, b);
    printf("max=%d min=%d\n", *p1, *p2);
}
int exchange(int *m, int *n)//定义函数
//因为定义是 int*q1, 而传递过来的是p1, 所以就是*p1,本质是 取值的 运算
//同理定义是 int q1, 而传递过来的是p1, 所以就是p1, 本质是 地址的 运算
{
    int p;  //p用来交换地址值，不加*
    if(*m < *n)//*取值
    {
    int p;
    p=*m; //p=a
    *m=*n;//a=b
    *n=p;//b=p=a

    }
    return exchange;
}
/**
p是中间变量，用于交换交换地址值，所以不加*
函数返回return 谁用了函数返回到谁那
**/
