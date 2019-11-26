/**
函数名: sqrt
功  能: 计算平方根
用  法: double sqrt(double x);
#include <math.h>
**/
#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    scanf("%f", &x);
    printf("√%f=%f", x, sqrt(x));
}
