/****
Êä³öÍ¼ÐÎ
     *
    **
   ***
  ****
 *****
******

****/
#include <stdio.h>
void main()
{
    int i, j;
    for(i=1; i<=7; i++)
    {
        for(j=7; j>(7-i); j--)
        {
            putchar('*');
        }
        printf("\n");

    }
}
