/**
有一个数组score，放置10个成绩，自己写一个average算平均成绩

数组名做参数传递：1.形参实参必须是类型相同的数组
数组名做参数，相当于传送了整个数组

小甲鱼是返回数再打印，我是直接打印在返回
**/
#include <stdio.h>    //  这个地方定义多少都行，只要相等就行
double average(double array[10]);//定义为浮点双精度型double
                                 //引用数组名，数组类型定义相同
void main()
{
    double score[10]={77.5, 95.6, 88, 95.5, 45.6, 44, 68.5, 55, 88, 100};
    double result;
    result = average(score);
    printf("%5.3f", result);
}

double average(double array[10])//定义函数
{
    int i; //用循环加
    double z=0;
    for(i=0; i<10; i++)
    {
        z=z+array[i];
    }
    z=z/10;
    return z;
}




