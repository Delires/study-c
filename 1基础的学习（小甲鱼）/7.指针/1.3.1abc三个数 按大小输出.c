/**
����abc������ ����С���
�����Ƚ��ٽ���

����ָ�������*��������û��*��ָ�����ֻ�ܴ��ָ��
**/
#include <stdio.h>
void main()
{
    int *p1, *p2, *p3;//����ָ�������*
    int a, b, c, l, m, n;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    scanf("%d %d %d", &a, &b, &c);

    if(a<b)
    {
      l=*p1;
      *p1=*p2;
      *p2=l;
    }
    if(a<c)
    {
        m=*p1;
        *p1=*p3;
        *p3=m;
    }
    if(b<c)
    {
        n=*p2;
        *p2=*p3;
        *p3=n;
    }
printf("%d %d %d", *p1, *p2, *p3 );
}
