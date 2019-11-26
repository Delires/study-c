/**************************************
一个整数。加上100后是一个完全平方数，再加上168又是一个完全平方数，求该数？
思路:在10万以内判断，加100开方，在加268开方(先加100在加168)
      开方后得到int整型数 而不是float浮点型数 即可
提示:用   #include<math.h>    （数学函数库）
          x=sqrt()            （开方运算符）
***************************************/
/*用到i++这个概念
i++ i参与运算后再自增1
++i i自增1后再参与运算
写的形式为：for(i=1;i<=100000;i++)
*/
#include <stdio.h>
#include <math.h>
void main()
{
    long int i, x, y;
    for(i=1;i<=10000;i++)   //i在一万以内  i=;i<=10000;i++  i自增到一万截止
    {
        x=sqrt(i+100);
        y=sqrt(i+268);

    if(x*x==i+100&&y*y==i+268) //x等于这一万个数的开方，但x定义为整型，有小数的部分会被省略掉。
    printf("%ld", i);           //所以当开方为整数时约掉小数部分仍不变，所以只有整数约掉后的平方等于开方的这个数
    }
}

/*
for循环语句,学了回头看看
*/
