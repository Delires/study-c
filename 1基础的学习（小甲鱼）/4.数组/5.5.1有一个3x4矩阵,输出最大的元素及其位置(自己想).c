/**
��һ��3x4����,�������Ԫ�ؼ���λ��
��ʾ��һǧ����һ�����һά�����
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,99,6,7},{8,9,10,11}};
      //3*4�ȸ�ֵ�������
    int i, j, max=0, row, ran; //row�� rank��
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=3; j++)
        {
            if (a[i][j]>max)
            {
                max = a[i][j];
                row =i;
                ran =j;
            }
        }
    }
    printf("row=%d\t, ran=%d\t\n", i, j);
    printf("%d\n",max);
}
