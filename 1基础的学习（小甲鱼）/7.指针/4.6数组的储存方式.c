/**
a=a+7 ��a�ĸ����ĵ�ַ���ǵ��߸���ĸ�ĵ�ַ(a��0��ʼ)
                     ���Դ�ӡ�����Ǵӵ��߸���ĸ��ʼ

�����������ӡ�����ĵ������ǵ��߸���ĸ
**/

#include <stdio.h>
void main()
{
    char a[20] = "henmengdi shi zhu";
    printf("%c\n", a[7]);
    //��ӡ�������ǵ��߸���ĸ

    char *b = "hengmengdi shi zhu ";
    printf("%s", b+7);
    //��ӡ�������Ǵӵ��߸���ĸ��ʼ�����
}
