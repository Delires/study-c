
#include <stdio.h>
void rever(int *x, int n);
void main()
{
    int i, a[10]={3,7,9,11,0,6,7,5,4,2};

    rever(a, 10);

    for(i=0; i<10; i++)
     {
        printf("%d ", *(a+i));
     }
}

void rever(int *x, int n)
{
    int *p, temp, *i, *j, m;

    m=(n-1)/2;
    i=x;//x������Ԫ�ص�ַ
    j=x+n-1;//x����ĩԪ�ص�ַ
    p=x+m;//x�м���Ǹ�Ԫ��

    for( ; i<=p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;

    }
}


