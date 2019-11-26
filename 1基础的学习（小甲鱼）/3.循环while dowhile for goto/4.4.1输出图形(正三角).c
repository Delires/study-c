/****
输出图形
*
**
***
****
*****
******
分析:一共六行，行数等于*个数
用for语句进行循环嵌套
****/
#include <stdio.h>
void main()
{
    int i, j;
    for(i=1; i<7; i++)
    {
        for(j=1; j<=i; j++)
        {
            putchar('*');
        }
        printf("\n");  //内层嵌套每执行完一次就回车换一行
    }

}
