/**
typedef��#define�������ƣ�������ȫ��ͬ��
����1:
     #define���治�üӷֺţ���Ϊ����Ԥ�����������ڱ�����ǰִ�еġ��������
     typedef��Ҫ�ӷֺţ���Ϊ��������ڱ���ʱִ�е�

����2����д��ͬ
      #define ���� �������� (����ǰ)
      typedef ������ ����   (���ں�)

����3:
     #define֪ʶ��е���滻
     typedef�Ǹ�һ���������˱���
**/
#include <stdio.h>

#define p2 int*
typedef int* p1;

int main(void)
{
    p2 a,b;  //#define֪ʶ���滻������a��ָ�룬p������
    printf("%d\t%d\n", a, b);

    p1 c,d;  //ypedef�Ǹ�һ���������˱���,����c��d����ָ��
    printf("%d\t%d\n", c, d);

    return 0;

}
