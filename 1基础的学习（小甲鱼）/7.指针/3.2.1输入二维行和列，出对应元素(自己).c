/**
�����ά����a[3][4]
�����к�����ʾ��ӦԪ�أ�������Χ��ʾ����
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int i, j, row, column;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

   loop: printf("row=");
    scanf("%d", &row);
    printf("column=");
    scanf("%d", &column);


    if(row < 4)//����1��ʼ�Դ�
    {
        if(column < 5)
        {
            printf("%d\n", a[row-1][column-1]);//�к���ͳһ��1�����������㣬��1*1��ʼ
        }
        else
        {
            printf("column intput error");//�ĳ� goto loop; ��������������
        }
    }
    else
    {
        printf("row intput error");////�ĳ� goto loop; ��������������
    }

    goto loop;//��goto���һֱִ�г���
}


