/* putcharh����:�ַ��������    putchar+()+'' */
/* ����Ҫ��ͷ�ļ�#include<stdio.h> */
/* ���б�������һ������ putchar('\n')  �������*/
/* ���������� \���� ��Ӧ�˽���������Ӧ��asc��*/

#include <stdio.h>
void main()
{
    putchar('A');   /* ��ʾA */
    putchar('\n');  /* ����  */
    putchar('x');   /* ��ʾx */
    putchar('\n');  /* ����  */
    putchar('\101');/* ��ʾA  \101�˽�����=65ʮ������=ASC����A */
}
