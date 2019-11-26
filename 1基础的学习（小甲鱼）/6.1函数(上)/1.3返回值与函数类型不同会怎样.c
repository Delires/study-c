/**
按规定 返回值return的类型(int z) 应该和 函数类型相同(int max)
若不同呢？会发生什么情况
**/
#include <stdio.h>
void main()
{
#if(0
     int max (float x, float y);//有分号
#endif)
    int max (float x, float y);//有分号
    float a, b;
    int c;
    scanf("%f %f", &a, &b);
    c = max(a, b);
    printf("Max is %d", c);
#if(0)
    printf("Max is %f", c);
#endif
}

#if(0)
int max (float x, float y)//没分号
#endif
int max (float x, float y)//没分号
{
    float z;           //定义max函数类型是整型int
    z = x > y? x: y;   //定义返回值float
    return z;//z是float 返回int max会自动省略小数点后
}

/**
a的值赋给x，b的值赋给y
z的值赋给max；max值赋给c
**/
