/**
ָ���
int research(int *x, int n);
��ð�ݷ���������С��������:�����ƱȽϴ������ڲ�����ĸ��Ƚ�
                            �����𽥱Ƚϣ�С�ľ�����š�һֱ����ȥС�ľ������
**/
#include <stdio.h>
int reasearch(int *x, int n);
int z;

void main()
{
    int a[10]={25,45,36,98,58,51,35,48,86,57};
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i)); //a==&a[0]  *a==a[0]
    }
    printf("\n");

    reasearch(a, 10);
    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");

    printf("max=%d min=%d", *(a), *(a+9));//*(a+9)=a[9]  *ȡֵ��
}

int reasearch(int *x, int n)
{
    int i, j, o;//��ð�ݷ�������
    for(i=0; i<10; i++)//�����ƱȽϴ���
    {
        for(j=0; j<9-i; j++)//�ڲ���Ƶڼ����Ƚ� ��С���Ӻ�ͷ
        {
            if(*(x+j)<*(x+j+1))
            {
                o = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = o;
            }

        }
    }
    return z;
}
