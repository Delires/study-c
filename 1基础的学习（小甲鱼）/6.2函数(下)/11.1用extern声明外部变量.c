/**
��extern�����ⲿ���������ų����ļ���������
**/
#include <stdio.h>

int max(int x, int y)
{
    int z;
    z = x>y?x:y; //��Ŀ����� 1?2:3
    return (z);
}

void main()
{
    extern A,B;//����ABΪȫ�ֱ�����ȫ�ֱ���
    //����ȥ��
    printf("%d\n", max(A,B));
}

int A = -13, B = -8;//A,B��ȫ�ֱ���,�������ĸ�ֵ����
                   //���������extern,ֻ��������ͷ���壬��������������
