/**
������: strcat
��  ��: �ַ���ƴ�Ӻ���
��  ��: strcat(m,c); ���ַ���m,cճ����һ��
������: #include <string.h>
**/
#include <stdio.h>
#include <string.h>
void main()
{
    char sb[25];
    char *a = "hemengdi";
    char *b = "ai";
    char *c = "fapiqi";

    strcpy(sb, a); //strcpy������,����ͷ��ʼ����
    strcat(sb, b);
    strcat(sb, c);

    printf("%s", sb);

}
