/**
����ѭ���͵ݹ��ӡ0-999���ú궨��
**/

#include <stdio.h>

#define A(x) x;x;x;x;x;x;x;x;x;x;

int main(void)// ���� void main()
{
    int n=0;
    A( A( A( printf("%d\t", n++) ) ) );
}
//��ӡ 10*10*10�� printf("%d\t", n++)

//��һ��A()��ӡ10�� printf("%d\t", n++)
//�ڶ���A( A() )��ӡ10�� ����ӡ10�� printf("%d\t", n++)��
