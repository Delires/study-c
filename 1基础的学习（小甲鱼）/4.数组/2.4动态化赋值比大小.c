/**
��̬��ֵ(��ѭ��)����˼�򵥣������˷�ʱ��
ͨ�����к�����룬����ֵ
**/
#include <stdio.h>
void main()
{
   int i, max, a[10];
   printf("intput 10 number\n");
   for(i=0; i<10; i++)
   {
       scanf("%d", &a[i]); //&a[i]��ȡ��ַ��ȡa[0]��a[9]����ֵ
   }
   max=a[0];  //�����һ����max��Ȼ��10��ѭ��10�αȽ�
   for(i=0; i<=9; i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
   printf("maxmum=%d\n", max);
}
