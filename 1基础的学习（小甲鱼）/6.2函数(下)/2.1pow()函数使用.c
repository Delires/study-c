/**
实现pow()函数并验证
pow函数
头文件：math.h/cmath(C++中)
功能：计算x的y次幂。
返回值：x不能为负数且y为小数，或者x为0且y小于等于0，返回幂指数的结果。
返回类型：double型，int，float会给与警告！
**/
#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c;
  scanf("%f,%f", &a, &b);
  c = pow(a, b);
  printf("%f^%f=%f", a, b, c);
  return 0;//return 0等于void main()
}

#if(0)
double pow(double x, double y)
{
    double z;
    z = pow(x, y); // a,b不在这个函数内，要用xy
    return (z);
}
#endif  //因为pow函数是函数库函数不能自己定义
