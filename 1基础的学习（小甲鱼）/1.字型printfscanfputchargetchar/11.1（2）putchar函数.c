/* putcharh����:�ַ��������    putchar+()+'' */
/* ����Ҫ��ͷ�ļ�#include<stdio.h> */
/* ���б�������һ������ putchar('\n')  �������*/
/* �ո�(tab��)��������һ������ putchar('\t')  ����(%d\n)�����������*/
/* ���������� \���� ��Ӧ�˽���������Ӧ��asc��*/

#include <stdio.h>
void main()
{
    char a='b', b='o', c='k';/*����adc�ֱ�Ϊ�ַ�����bok*/
    putchar(a); putchar(b); putchar(b); putchar(c); putchar('\t');
    /*��ӡ��book  ('\t')�൱��tab�� ��һ���е���˼*/
    putchar(a); putchar(b);   /* ��ӡbo */
    putchar('\n');            /* ����  */
    putchar(b);putchar(c);    /* ��ӡok */

}
