/****
输出图形
******
*****
****
***
**
*
****/
#include<stdio.h>
void main()
{
    int i, j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=(8-i); j++)
        {
            putchar('*');
        }
        printf("\n");
    }
}
