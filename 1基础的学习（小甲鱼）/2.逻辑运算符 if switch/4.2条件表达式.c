/*
�˳������ab��������
*/

#include <stdio.h>
void main()
{
    int a, b, max; //ʹ��ǰ�����ȶ�����
    printf("\n input twonumber:");
    scanf("%d%d", &a, &b);     //getchar()�ַ����� putchar()�ַ���� ��char�ַ��ʹ���
    printf("max=%d", a>b?a:b); //%d������a������b
                //  ���ʽ1?2:3 1�������2����3
}

/*
������������ȼ�С�ڱȽ������
��a>b����a<b �� a>b?a:b����a>b?b:a �ͳ��������С���Ǹ���
*/
