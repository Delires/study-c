/***
while与do-while区别
while实现                     while(表达式)
                              {语句;}
*****/
#include <stdio.h>
void main()
{
    int sum=0, i;
    printf("input number of i\n");
    scanf("%d", &i);
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("%d", sum);
}
/*
do-while为
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=10);

区别在于当i>10时 while不执行循环      输出为0
                 do-while还执行一次   输出为i
*/
