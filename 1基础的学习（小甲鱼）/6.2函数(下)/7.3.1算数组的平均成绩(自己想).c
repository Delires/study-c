/**
有一个数组score，放置10个成绩，自己写一个average算平均成绩

数组名做参数传递：1.形参实参必须是类型相同的数组
数组名做参数，相当于传送了整个数组

**/
#include <stdio.h>
void average(int b[10]);

void main()
{
    int i;
    int score[10];//必须先定义数组长度
    for (i=0; i<10; i++)
    {
        scanf("%d,", &score[i]);
    }

   average(score);//数组名做参数，即引用整个数组
}

void average(int b[10])//数组类型相同，引用数组名
{
 int i=0;
 float sum=0;
 for(i=0; i<10; i++)
 {
     sum=sum+ b[i];//连加 sum=sum+i
 }
 printf("%f", sum/10);
}


