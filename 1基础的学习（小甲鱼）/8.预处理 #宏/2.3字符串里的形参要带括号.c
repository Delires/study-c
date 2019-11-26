/**
带参宏定义: #define 宏名(形参) 字符串
      调用: 宏名(实参);

字符串内的‘形参’通常要括起来 如:(y)*(y)
**/
#include <stdio.h>

#define SQ(y) (y)*(y)//去掉括号y*y试试,由于*+优先级不同会出错

void main()
{
    int a, sq;
    scanf("%d", &a);

    sq = SQ(a+1); //sq==SQ(a+1)=(a+1)*(a+1)
                  //去括号 sq=a+1*a+1

    printf("%d\n", sq);
}
