/****
输出图形
******
******
******
******
******
******
相当于i是行j是列
****/
#include <stdio.h>
void main()
{
    int i, j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++)
        {
            putchar('*');
        }
        printf("\n");
    }
}
