/**
������10��������������С����(�����)
int research(int x[], int n);
��ð�ݷ���������С��������:�����ƱȽϴ������ڲ�����ĸ��Ƚ�
                            �����𽥱Ƚϣ�С�ľ�����š�һֱ����ȥС�ľ������

ָ���
int research(int *x, int n);
**/
#include <stdio.h>
int reasearch(int x[], int n); //��ȷ�������Ⱦ���������
int z;

void main()
{
    int i;
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    z = reasearch(a, 10);//��������м���
     for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("max=%d, min=%d", a[0], a[9]);
}

int reasearch(int x[], int n)//��������
{
    int i, o, j;
    for(i=0; i<10; i++)//ð�ݷ�����ѭ���������ƱȽϴ������ڲ�����ĸ����Ƚ�
    {
      for(j=0; j<9-i; j++)
      {
        if(x[j]<x[j+1])
        {
         o=x[j];
         x[j]=x[j+1];
         x[j+1]=o;
        }
      }
    }
    return z;
}
