/*****
用π/4≈1-1/3+1/5-1/7+.....公式求π的近似值，直到某一项的绝对值小于0为止
提示:1.要确定计算精度
     2.分子不变,分母递增2,正负切换
     3.结果乘4
用循环 fabs()函数(求绝对值) pow(x,y)求x^y
******/
#include <stdio.h>
#include <math.h>//fabs() pow()函数在此库
void main()
{
    int s;
    float n, t ,pi;
    t = 1;
    pi= 0;
    n = 1.0;
    s = 1;
    while(fabs(t) > 1e-6) //1e-6是10的-6次方
    {
        pi = pi+t;//新的p等于旧的p＋t 构成连加连减
        n = n+2;  //分母
        s = -s;  //这是重点，新的s等于-旧s，相当于每循环一次s变好
        t = s/n;
    }
    pi = pi*4;
    printf("p1=%10.6f\n", pi);
}
