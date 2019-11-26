/**
计算阶乘
s=(2^2)!+(3^2)!

思路:用嵌套的原理,一个函数计算平方square
                   一个计算阶乘factorial(阶乘)
     主函数先调用square，再把square的值为实参，
           再调用factorial，再返回square，再返回主函数
**/
#include <stdio.h>
int square(int p);   //实现平方
int factorial(int q);//实现阶乘
//c语言不能嵌套定义，所以要先在外定义完，再进行调用

void main()
{
  int i;
  int s=0;
 #if(0)
 for(i=2; i<=3; i++)//用循环表示这个和
  {
      s= s+square(i);//声明square函数
  }
 #endif
 s = square(2) + square(3);
  printf("%d\n", s);
}

int square(int p) //定义square函数,i=p
{
    int k;
    int r;
    int factorial(int );//声明factorial函数
    k = p * p;
    r = factorial(k);
    return r;
}

int factorial(int q)//定义factorial函数,q=k
{
    int m=1;
    int i;
    for(i=1; i<=q; i++)
    {
        m=m*i;//m*=q
    }
    return m;
}
