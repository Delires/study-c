/* getchar�ַ����뺯�� ����Ϊ�Ӽ���������һ���ַ�*/
/* ��ʽΪ��getchar(); */
/* ͨ���� �����ַ� ���� һ���ַ����� �� char c; c=getchar();*/
/* getchar scanf �������붼���ڱ���������ģ�Ҫ�ڱ��������ٲ��� */

#include <stdio.h>
void main()
{
    char c;         /* ����cΪ�ַ��ͱ��� */
    printf("intput a character\n"); /* ��ӡ�� ���һ���ַ� Ӣ��*/
    c = getchar();  /* getchar�ַ����뺯��������һ���ַ���c �����ڱ�������ʾ*/
    putchar(c);    /* ���c */


}
