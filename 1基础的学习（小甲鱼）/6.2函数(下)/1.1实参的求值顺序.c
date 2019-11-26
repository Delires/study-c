/**
判断编译器是自左向右还是自右向左调试程序
**/
#include <stdio.h>
void main()
{
     int f(int a, int b); //声明int f(int a, int b)这个函数，并调用
    int i = 2, p;
    p = f(i, ++i); //f的值赋给p
    //f(int a, int b); == f(i, ++i);  所以自然i=a b=++i
    printf("%d\n", p);
}

int f(int a, int b)//对引用的这个程序做出解释，具体结束int f()里的运算
//f(int a, int b); == f(i, ++i);  所以自然i=a b=++i
{
   int c;
   if(a > b)
   {
       c = 1;
   }
   else if(a == b)
   {
       c = 0;
   }
   else
   {
       c = -1;
   }
   return (c); //把c的值返回给 intf
}
/**
a b 形参  i ++i 实参
自左向右f(i, ++i)=f(2,3) c=-1
自右向左f(i, ++i)=f(3,3) c=0
**/
