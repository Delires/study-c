/**
�����Ƶڼ������Ƚ�
�ڲ���ƱȽϴ���
n�������ڼ������ͱȽ�n-j�Σ����Լ�����
**/
#include <stdio.h>
void main()
{
    int a[10];
    int i, j, k;

    printf("please intput ten number:\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=9; i++)//���Ƚϸ���
    {
        for(j=0; j<9-i; j++)//�ڲ�ڼ����Ƚϣ���һ�����ͱȽ�9�Σ�n-j
        {
          if(a[j]<a[j+1]) //if����j����ţ�����i
          {                   //��С����������
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;    //��k���м������������

          }
        }
    }

    for(i=0; i<=9; i++)//ѭ����ӡ������
    {
        printf("%d\t", a[i]);
    }
}
