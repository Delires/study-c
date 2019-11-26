/**
设计一函数process,每次调用它都实现不同的功能。
输入ab，第一次调用找出ab大的，第二次找小的，第三次求和

提示:把函数的指针作为参数
     引用process函数时,通过参数再引用小的函数
**/
#include <stdio.h>
void main()
{
    int max(int p, int q);              //把函数地址赋给use
    int min(int p, int q);
    int add(int p, int q);
    int process( int x, int y, int(*use)() );//声明函数

    int a, b, c;
    scanf("%d %d", &a, &b);

    c = process(a, b, max);//引用max函数的地址,再把ab赋给max函数的变量
    printf("a=%d b=%d max=%d\n", a, b, c);

    c = process(a, b, min);//引用min函数的地址,再把ab赋给min函数的变量
    printf("a=%d b=%d min=%d\n", a, b, c);

    c = process(a, b, add);//引用add函数的地址,再把ab赋给add函数的变量
    printf("a=%d b=%d add=%d\n", a, b, c);
}

int process( int x, int y, int(*use)() )//定义process函数
{
      use(x, y); //use指向函数，函数(变量)
}

int max(int p, int q) //定义max函数
{
    int z;
    if(p > q)
    {
        z = p;
    }
    else
    {
        z = q;
    }
    return z; //把z的值返回
}

int min(int p, int q) //定义min函数
{
    int z;
    if(p < q)
    {
        z = p;
    }
    else
    {
        z = q;
    }
    return z; //把z的值返回
}

int add(int p, int q) //定义add函数
{
    int z;
    z = p+q;
    return z;
}
