/**
动态赋值(用循环)，构思简单，运行浪费时间
通过运行后的输入，来赋值
**/
#include <stdio.h>
void main()
{
   int i, max, a[10];
   printf("intput 10 number\n");
   for(i=0; i<10; i++)
   {
       scanf("%d", &a[i]); //&a[i]是取地址，取a[0]到a[9]输入值
   }
   max=a[0];  //假设第一个是max，然后10次循环10次比较
   for(i=0; i<=9; i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
   printf("maxmum=%d\n", max);
}
