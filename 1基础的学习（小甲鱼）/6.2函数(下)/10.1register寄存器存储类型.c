/**
由于某种原因 定义register的速度比auto快
若想提高效率，用register定义

下例和static一样，比较判断运行效率(速度)
**/
#include <stdio.h>

int fac(int n)
{
    static int f = 1;//1, 1*2, 2*3, 6*4
    f = f * n;
    //由于f是static静态变量，所以每次都是上一次i阶乘算出的值
    return f; //把f这个值返回
}

void main()
{
   register int i;
   //用register代替static 效率更高
   for(i=1; i<10; i++)
   {
       printf("%d!=%d\n", i, fac(i)); //把i赋给int n去计算
   }
}
