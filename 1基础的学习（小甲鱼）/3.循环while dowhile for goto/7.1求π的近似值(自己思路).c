/*****
用π/4≈1-1/3+1/5-1/7+.....公式求π的近似值，直到某一项的绝对值小于0为止
提示:1.要确定计算精度
     2.分子不变,分母递增2,正负切换
     3.结果乘4
用循环 fabs()函数(求绝对值) pow(x,y)求x^y
******/
#include <stdio.h>
#include <math.h>
void main()
{
    int i, m=0;
    double p=0 ;
    for(i=1; i<=10000000; i=i+2)  // i+2错的 必须是i=i+2
    {
        p = p + pow(-1,m)*(1.0/i);//必须写1.0  想连加 sum=sum+i
        m++;                  //换成 m=-m 更好，相当于每循环一次变号一次
    }
    printf("%lf\n", p*4);

}
