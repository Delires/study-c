/*********************************************
�ж�һ���Ƿ�Ϊ����
�ܱ�4���� ���ܱ�100���� Ϊ����
�ܱ�4���� �ܱ�100���� �ұ�400������������leap
**********************************************/
#include <stdio.h>
int main(void)
{
    int leap;
    printf("intput a year��");
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
