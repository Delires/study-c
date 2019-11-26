/**
函数嵌套
    嵌套是定义一个函数时,定义内又包含另一个函数
    必须先声明函数,在main()函数外定义

计算阶乘
s=(2^2)!+(3^2)!

思路:用嵌套的原理,一个函数计算平方square
                   一个计算阶乘factorial(阶乘)
     主函数先调用square，再把square的值为实参，
           再调用factorial，再返回square，再返回主函数
**/
#include <stdio.h>
int square(int p);
int factorial(int q); //提前声明函数

void main()
{
    int a=2, b=0;
    for(a=2; a<=3; a++)
    {
       b=b+square(a);//调用了square函数
    }
    printf("%d", b);
}

int square(int p) //定义square函数,形式要与声明保持一致
{
    int j, k;
    j = p * p;
    k = factorial(j); //square函数又调用了factorial函数
    return k;  //返回的是经factorial算过的值
               //k返回到int函数，函数再给a
}

int factorial(int q)//定义factorial函数,要与声明形势一致
{
    int l=1;
    for(q; q>0; q--)
    {
        l=l*q;
    }
    return l;  //把l的值返回到函数，函数在给k
}





