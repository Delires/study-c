/**
从数组10个数中找最大和最小的数(数组版)
int research(int x[], int n);
用冒泡法把数按从小到大排列:外层控制比较次数，内层控制哪个比较
                            两两逐渐比较，小的就往后放。一直比下去小的就在最后

指针版
int research(int *x, int n);
**/
#include <stdio.h>
int reasearch(int x[], int n); //不确定数组宽度就这样定义
int z;

void main()
{
    int i;
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    z = reasearch(a, 10);//对数组进行计算
     for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("max=%d, min=%d", a[0], a[9]);
}

int reasearch(int x[], int n)//定义数组
{
    int i, o, j;
    for(i=0; i<10; i++)//冒泡法两层循环，外层控制比较次数，内层控制哪个数比较
    {
      for(j=0; j<9-i; j++)
      {
        if(x[j]<x[j+1])
        {
         o=x[j];
         x[j]=x[j+1];
         x[j+1]=o;
        }
      }
    }
    return z;
}
