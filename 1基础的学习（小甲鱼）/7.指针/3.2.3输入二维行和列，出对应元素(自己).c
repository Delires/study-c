/**
С���� ��άָ��
�����벻�Ծ�һֱѭ��

���ռ�����˼·д
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int i, j, row, column;

                 //�����ά����ָ��
    int (*p)[4]; //(*ָ�������)[������]
    p = a;

    for(i=0; i<3; i++)//��ӡ����
    {
        for(j=0; j<4; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("row=");//�����У����Ծͼ�������
    scanf("%d", &row);
    while(row>2 || row<0)//�����з�Χ��һֱѭ������
    {
        printf("row=");
        scanf("%d", &row);
    }

    printf("column=");//�����У����Ծͼ�������
    scanf("%d", &column);
    while(column<0 || column>3)//�����з�Χ��һֱѭ������
    {
        printf("column=");
        scanf("%d", &column);
    }

    //��ӡ�����ж�Ӧ����
    printf("a[%d][%d]=%d ",row, column, *(*(a+row)+column));//��ָ���ʾ��������**����
                                    //(+)+ �����ڼ��� ���������

}
