/* printf��ʽ��� ��Ƚ��� putchar�ַ���� ���ܸ�ǿ��*/
/* ��ʽΪ printf("��ʽ",��ֵ��) */
/* %d���� %f������ %c�ַ��� */

#include <stdio.h>
void main()
{
    int a=88, b=89;  /* ab������Ϊ���ͻ�����a��88 b��89 */
    printf("%d,%d\n", a, b);
    printf("%f,%f\n", a, b);
    printf("%c,%c\n", a, b);
    printf("a=%d,b=%d", a, b);/* ""�ڳ���%d֮�ⶼ����Ҫ��ӡ������ */
                              /* %d%f%c��������������� */
}
