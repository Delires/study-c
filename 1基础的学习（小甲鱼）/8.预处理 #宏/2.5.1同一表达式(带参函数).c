/**
���κ� �� ���κ��� ��Ȼ�÷�������,������ͳһ���ʽ���ܻ��Ȼ��ͬ
���κ�������
**/
#include <stdio.h>

void main()
{
    int i=1;
    int SQ(int y); //��������

    while(i <=5 )
    {
        printf("%d\n", SQ(i++) );//iֵ����y���뺯��
    }
}
int SQ(int y)//���庯��
{
    return( (y)*(y) );
}
