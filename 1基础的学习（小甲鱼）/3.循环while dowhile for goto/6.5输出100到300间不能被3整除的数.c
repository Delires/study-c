/***
输出100到300间不能被3整除的数

% 余数运算符

continue语句，不能整除的直接跳过继续下一个，能除的继续
**/
#include <stdio.h>
void main()
{
    int i;
    for(i=100; i<=200; i++)
    {
        if(i%3 == 0)
        {
            break;//原本是continue换成break，即当102时就完全跳出这个循环，所以输出100 101
        }
      printf("%d\t", i);
    }
}
/**
方法二 不用continue程序
#include <stdio.h>
void main()
{
    int i;
    for(i=100; i<=300; i++)
    {
        if(i%3==0)
            printf("%d\t", i);
    }
}

**/
