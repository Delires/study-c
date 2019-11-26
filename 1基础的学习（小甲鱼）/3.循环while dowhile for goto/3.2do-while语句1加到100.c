/*****
do-while语句 算 1加到100

do-while语句的形式为:    do
                         {语句;}
                         while(表达式);   此处有分号
***********/
#include <stdio.h>
void main()
{
    int sum=0, i;//必须定义起始值为0 和 i从1开始
    i=1;
    do
        {
        sum=sum+i;
        i++;
        }
    while(i<=100);
    printf("%d\n", sum);

}
