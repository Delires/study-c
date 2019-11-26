/**
外层控制第几个数比较
内层控制比较次数
n个数，第几个数就比较n-j次，跟自己不必
**/
#include <stdio.h>
void main()
{
    int a[10];
    int i, j, k;

    printf("please intput ten number:\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=9; i++)//外层比较个数
    {
        for(j=0; j<9-i; j++)//内层第几个比较，第一个数就比较9次，n-j
        {
          if(a[j]<a[j+1]) //if里用j做序号，不是i
          {                   //把小的数往后扔
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;    //用k做中间变量交换两数

          }
        }
    }

    for(i=0; i<=9; i++)//循环打印出数组
    {
        printf("%d\t", a[i]);
    }
}
