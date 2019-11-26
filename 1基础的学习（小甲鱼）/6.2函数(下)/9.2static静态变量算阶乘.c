/**
static 静态变量定义后 下次调用时保留上一次的值

用这个特点算阶乘
**/
#include <stdio.h>

int fac(int n)
{
    static int f = 1;//1, 1*2, 2*3, 6*4
                     //定义f为静态变量1
                     //静态变量不给m赋初值就默认为0
    f = f * n;
    //由于f是static静态变量，所以每次都是上一次i阶乘算出的值
    return f; //把f这个值返回
}

void main()
{
   int i;
   for(i=1; i<10; i++)
   {
       printf("%d!=%d\n", i, fac(i)); //把i赋给int n去计算
   }
}
/**
static f
每次调用后,f都是上一次的值 f=1 f=1 f=2 f=6 f=24
**/

#if(0)
#include <stdio.h>
int fuck(int a);

void main()
{
    int i=1;
    for(i=1; i<10; i++)
    {
        printf("%d!=%d\n", i, fuck(i));
    }

}

int fuck(int a)
{
    static m=1;//静态变量不给m赋初值就默认为0
    m = m * a; //1, 1*2, 2*3, 6*4
    return m;
}

#endif)
