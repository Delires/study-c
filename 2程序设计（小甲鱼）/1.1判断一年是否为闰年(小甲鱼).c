/*********************************************
判断一年是否为闰年
能被4整除 不能被100整除 为闰年
能被4整除 能被100整除 且被400整除才是闰年leap
**********************************************/
#include <stdio.h>
int main(void)
{
    int leap;
    printf("intput a year；");
    scanf("%d", &leap);

    if(  leap%4 ==0 )
    {
        if( leap%100 ==0)
        {
           if( leap%400 ==0 )
           {
             printf("leap year");
           }
           else
           {
              printf("Common year");
           }
        }
        else
        {
            printf("leap year");
        }
    }
    else
    {
       printf("Common year");
    }
}
