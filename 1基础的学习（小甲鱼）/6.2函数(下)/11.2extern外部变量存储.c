#include <stdio.h>

int A;//����ȫ�ֱ��� ���������ⲿ����extern

void main()
{
    int power(int n);//���������������ڶ���
    int b=3, c, result, m;

    printf("enter the number A and its power m:\n ");
    scanf("%d %d", &A, &m);

    c=A*b;
    printf("%d*%d=%d\n", A, b, c);

    result=power(m);//ʹ�ú���
    printf("%d^%d=%d", A, m, result);
}

//�����ⲿ�����������������A��һ��
 extern  A;

 int power(int n)//���庯��
 {
     int i, sum=1;
     for(i=1; i<=n; i++)
     {
         sum = sum*A;
     }
     return sum;//������ѭ��

 }





