/**
         *ȡֵ��
         &ȡ��ַ��

**/

#include <stdio.h>
void main()
{
    int i=1000;   //ֱ�ӷ���
    int *pointer; //*����ȡֵ�������Ǳ�ʾpointer��ָ��
    pointer = &i; //&ȡֵ������i�ĵ�ַȡ������pointer
    printf("%d", *pointer);//*ȡֵ����ȡ��pointer�����ַ��ֵ
}

/**
pointer ������� i�ĵ�ַ�ı�ţ�������i��ֵ
**/
