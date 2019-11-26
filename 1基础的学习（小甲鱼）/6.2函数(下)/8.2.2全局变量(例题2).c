/**
有一个一维数组，内放10个成绩，求最高分，最低分，平均分
**/
#include <stdio.h>
int h=0, l=0, a=0; //全局变量
void mian()
{
   double p[10] = {77.5, 66.5, 88.5, 99, 56.32, 78.2, 65.33, 89.21, 78.59, 99.6};

   average(p, 10);
   maxmin(p, 10);
   printf("average=%f, max=%f, min=%f", a, h, l);

}
double average(double q[10])//定义函数
{

    int i=0;
    for(i=0; i<10; i++) //算平均值的函数
    {
        a = a+q[i];
    }
    a = a/10;

}

double maxmin(double q[10])//冒泡法算最大最小
{
    double m;
    for(int i=0; i<10; i++)
    {
        if(a[i]<a[i+1])
        {
            m=a[i+1];
            a[i+1]=a[i];
            a[i]=m;
        }
    }
    h = a[0];
    l = a[9];
}

