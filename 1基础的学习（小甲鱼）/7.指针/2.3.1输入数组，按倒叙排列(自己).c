/**
a[10]={3,7,9,11,0,6,7,5,4,2}
������a��������������

**/
#include <stdio.h>
int rever(int m[10]);//nһ����������� (int m[], int n)
                            //ֱ�Ӷ��������ȣ��Ϳ���ʡ�� (int m[10])
int z;

void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    z = rever(a);

    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

}

int rever(int m[10])
{
    int o, i;
    for(i=0; i<=4; i++)
    {
         o = m[i];
        m[i] = m[9-i];
        m[9-i] = o;
    }
    return z;
}
/**
��������a[]����ʱ
��������ʱ�� ����(������) ����[]
          �� rever(a)��  rever(a[10])��
**/
