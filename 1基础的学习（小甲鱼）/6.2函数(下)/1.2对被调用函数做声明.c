/**
如果定义函数出现在主函数前，则可以不用提前声明函数
**/

float add(float x, float y)//定义add函数
{
    float z;
    z = x+y;   //xy的值主函数已赋值
    return (z); //z的值返回给函数
}

#include <stdio.h>
void main()
{
    float add(float x, float y);//声明函数add
    float a, b, c;
    scanf("%f,%f", &a, &b);//输入 , 隔开
    c = add(a, b); //add函数返回值等于c
                   //x=a  y=b
    printf("sum is %f\n", c);
}
#if(0)
float add(float x, float y)//定义add函数
{
    float z;
    z = x+y;   //xy的值主函数已赋值
    return (z); //z的值返回给函数
}
#endif

