/**
对比2.1，自己建立一个power函数，不引用函数库pow，但同样实现算次方
先声明函数在定义
用循环
**/
#include <stdio.h>
int main()
{
  float power(double x, double y); //声明函数,有;
  float a, b, c;
  scanf("%f,%f", &a, &b);
  c = power(a, b);
  printf("%f^%f=%f", a, b, c);
  return 0;
}

float power(double x, double y)//定义函数，无;
{
    float z;
    z = x;
    for(int i=1; i<y ; i++)
    {
        z=z*x; //z=*x 这两个一个意思
    }
    return (z);
}
