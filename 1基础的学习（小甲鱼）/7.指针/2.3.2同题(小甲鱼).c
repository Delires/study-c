/**
��Ϊ�Ҷ����������� ���� int rever(int m[10]);
            ��ʹ�ú���   rever(a);
С����δ���������� ���� int rever(int m[], int n);  n����������
            С����ʹ�ú��� rever(a, 10);

ע��:����ʹ�ú���ֻ�ñ�����
      rever(a, 10) ��    rever(a[10], 10) ��
**/
#include <stdio.h>
int rever(int x[10], int n);
int z;

void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    z = rever(a, 10);//������������ȥ��ok�����ô�[]

    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

}

int rever(int x[10], int n)
{
    int temp, i, j, m;
    m=(n-1)/2;
    for(i=0; i<=m; i++)
    {
        j = n-1-i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return z;
}
