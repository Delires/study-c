/**
�Ҽ����ܴ���
    ���� if((i+j)%2!=0||(i%2!=0&&j%2!=0))
������� if(i==1||j==1)
**/
#include <stdio.h>
void main()
{
    int a[3][3]; //�ȶ����ά����ĳ���
    int i, j;
    printf("please intput nine number\n");

    for(i=0; i<3; i++) //��ѭ����̬��ֵ
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<=2; i++)//i<=2��i<3��һ����
    {                  //�����λ�õĹ���
        for(j=0; j<=2; j++)
            {
                if(i==1||j==1) //�����������,i��j��1
                {
                    printf("%d ", a[i][j]);
                }
                else
                {
                    printf("  ");
                }

            }
        printf("\n");//ÿ��ʾ��һ�оͻ���
    }
}
