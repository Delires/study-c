/**
自己写一个函数，用square(广场)代替sqrt
先声明函数再定义函数
循环，给数递增，一直递增到平方=这个数
**/
#include <stdio.h>
void main()
{
    float square(float x);
    float a, b;
    scanf("%f", &a);
    b = square(a);
    printf("√%f=%f", a, b);
}

float square(float x)
{
    float z;
    for(z=0; z<100  ;z=z+0.001)//没表达式2，死循环，但有判断就不是
    {
        if(z*z==x)
        {
            return (z);
        }
        else if(z*z<x+0.01&&z*z>x-0.01)
        {
            return (z);
        }

    }

}
