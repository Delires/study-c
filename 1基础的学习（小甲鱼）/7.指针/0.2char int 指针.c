#include <stdio.h>
void main()
{
    char a='f';
    char *pointer;
    pointer = &a;
    printf("%d", *pointer);
}
#if(0)
#include <stdio.h>
void main()
{
    int a=100;
    int *pointer;//ָ�������һ��
    pointer = &a;
    printf("%c", *pointer);
}
#endif
/**
char int ��ת��
char '�ַ�' ��ӡ%d ��ʾasc��
int   ����  ��ӡ%f ��ʾ��ĸ
**/
