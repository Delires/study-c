/**
数据传递通常三种
1.参数:通过形参和实参传递
2.返回值:用return语句返回计算结果
3.全局变量:在最外宏定义一个数，以后函数中都会被传递这个数
**/
#include <stdio.h>
void main()//类型标识符void 不返回值
{
    int max(int x, int y);//定义有参的形参函数，但还未定义int max()函数
    int a, b, c;

    scanf("%d,%d", &a, &b);//输入逗号隔开 "%d %d"输入用空格隔开
    c = max(a, b); //a，b是实参
                  //把max赋给c
    printf("max is %d", c);

}

//定义 int max()
int max(int x, int y) //调用时,将实参赋给形参
{                    //把a赋给x;把b赋给y
                     //把z赋给 int max

    int z;
    x = x*5;//形参发生改变，实参不变，调用结束实参还在，形参被释放
    y = y*5;
    z = x>y ? x : y; //三目运算 1?2:3 1真执行2假执行3
#if(0)
    if(x > y)
    {z = x ; }
    else
    {z = y;}
#endif
    return z;//将z返回到主函数main,而z就是最大的数，把这个数赋给c
}
/***
把z赋给 int max
把max赋给c
所以就是把z赋给c

把a赋给x
把b赋给y

***/
