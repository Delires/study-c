/**
a[10]={3,7,9,11,0,6,7,5,4,2}
������a��������������

��ָ��������,ԭ����a[i] ������*(p+i) ��*(a+i)
**/
#include <stdio.h>
int rever(int *x, int n); //��Ϊ���鴫��ȥ�ǵ�ַ��*��ַ����ֵ
                          //n��������
int z;//ȫ�ֱ�������ֵ
void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    printf("the combine is array:\n");
    for(i=0; i<=9; i++)
    {
        printf("%d ", *(a+i)); //a==&a[0] *a==a[0]
    }
    printf("\n");

    z = rever(a, 10);//������ֻ�ô�������
    printf("the combine is reverse:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i));
    }
}
int rever(int *x, int n)//���庯��
{
    int o, i;
    for(i=0; i<=4; i++)//i<4 ǰ�����������໻
    {
        o = *(x+i);//*ȡֵ�� o=x[i]
        *(x+i) = *(x+9-i);
        *(x+9-i) = o;
    }
}

