/**
3.#if 常量表达式      根据常量表达式1或0,来决定执行程序1或程序2
  程序1
  #else
  程序2
  #endif
**/
#include <stdio.h>
#define RUND 1//改变RUND的值,从而改变执行函数
#define PI 3.1515926

void main()
{
    float r;
    double s;

    printf("intput a number:\n");
    scanf("%f", &r); //scanf的类型要严格对应

#if RUND//RUND为1执行程序1
    s = r*r*PI;
    printf("the cycle area is %lf", s);
#else   //RUND为0执行程序2
    s = r*r;
    printf("the square area is %lf", s);
#endif
}
