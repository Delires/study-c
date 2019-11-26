/**
写成三个函数的表达形式 主函数 exchange函数 swap函数
a,b,c就用*p1 *p2 *p3表示
**/
#include <stdio.h>
int exchange(int *q1, int *q2, int *q3);
void swap(int *m, int *n);//声明两个函数
int z;//返回值提前定义

void main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c; //指针变量只能存放指针(地址) &变量

    printf("%d %d %d\n", a, b, c);
    z = exchange(p1, p2, p3);//定义指针变量时前头写*,其余时不写
    printf("%d %d %d\n", *p1, *p2, *p3);//经运算后的p1p2p3取值打印出来
}

int exchange(int *q1, int *q2, int *q3)//定义函数exchange
//因为定义是 int*q1, 而传递过来的是p1, 所以就是*p1,本质是地址取值的运算
//同理定义是 int q1, 而传递过来的是p1, 所以就是p1, 本质是地址的运算
{
    if(*q1 < *q2)
    {
        swap(q1, q2);
    }
    if(*q1 < *q3)  //if(两个数比)
    {
        swap(q1, q3);//因为定义是 int*m, 而传递过来的是q1, 所以就是*q1,本质是地址取值的运算
    }                //如果swap(*q1,*q3) 传递过去就成了**m
    if(*q2 < *q3)
    {
        swap(q2, q3);
    }
    return z;
}

void swap(int *m, int *n)//q1传递过来刚好是*q1
{
    int o;
    o = *m;
    *m = *n;
    *n = o;
}
/**
注意 函数定义时 是*p
    则数字传递过去就应该是q
    如果传递过去是*q,则就会成为**q
**/

