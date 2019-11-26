#include <stdio.h>

int A;//定义全局变量 ，类似于外部变量extern

void main()
{
    int power(int n);//声明函数，后文在定义
    int b=3, c, result, m;

    printf("enter the number A and its power m:\n ");
    scanf("%d %d", &A, &m);

    c=A*b;
    printf("%d*%d=%d\n", A, b, c);

    result=power(m);//使用函数
    printf("%d^%d=%d", A, m, result);
}

//定义外部变量，则各个函数的A都一样
 extern  A;

 int power(int n)//定义函数
 {
     int i, sum=1;
     for(i=1; i<=n; i++)
     {
         sum = sum*A;
     }
     return sum;//算完在循环

 }





