/***
while与do-while区别
do-while实现
                          do
                          {语句;}
                          while(表达式);
*****/
#include <stdio.h>
void main()
{
    int sum=0, i; //定义sum初值为0 因为i是定义输入，所以不用定义i初值
    printf("input numer of i\n");
    scanf("%d", &i);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=10);                    //i=0  循环11次  sum=1+2+3+5+6+7+8+9+10
    printf("%d", sum);               //i=1  循环10次  sum=1+2+3+5+6+7+8+9+10
}                                    //i=2  循环9次   sum=1+2+3+5+6+7+8+9
/*
while为
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }

区别在于当i>10时 while不执行循环      输出为0
                 do-while还执行一次   输出为i
*/
