/**
�жϱ��������������һ�������������Գ���
**/
#include <stdio.h>
void main()
{
     int f(int a, int b); //����int f(int a, int b)���������������
    int i = 2, p;
    p = f(i, ++i); //f��ֵ����p
    //f(int a, int b); == f(i, ++i);  ������Ȼi=a b=++i
    printf("%d\n", p);
}

int f(int a, int b)//�����õ���������������ͣ��������int f()�������
//f(int a, int b); == f(i, ++i);  ������Ȼi=a b=++i
{
   int c;
   if(a > b)
   {
       c = 1;
   }
   else if(a == b)
   {
       c = 0;
   }
   else
   {
       c = -1;
   }
   return (c); //��c��ֵ���ظ� intf
}
/**
a b �β�  i ++i ʵ��
��������f(i, ++i)=f(2,3) c=-1
��������f(i, ++i)=f(3,3) c=0
**/
