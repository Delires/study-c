#include <stdio.h>
void main()
{
    char a, b, c;  /* ����abcΪ�ַ������� */
    printf("input a character\n");
    scanf("%c %c %c", &a, &b, &c);
    printf("%d%d%d\n", a, b, c); /*%c�����ַ��� %d���asc��*/
    printf("%c%c%c\n", a-32, b-32, c-32);/*asc�� ��д+32=Сд*/
                                         /*%c ��������ַ���*/
}
/*%c�ַ���������� ��������asc�����ֵ����� */
/* char�ַ������ո�Ҳ��һ��asc�벻�ܴ�ո񣬳���scanf�� %c֮���пո� */
