/**
�ַ�����a[] ���ÿ��Ԫ�ض������ڴ��д���
�ַ�ָ��*a  ֻ�����ڴ��д����ַ�����һ��Ԫ�صĵ�ַ

�ַ����鸳ֵ������                    ֻ��
       char a[];                       char a[]="hhemengdi shi zhu";
       a = "hemengdi shi zhu";
�ַ�ָ��ֵ�����
       char *a;
       a = "hemengdi shi zhu";

**/
#include <stdio.h>
void main()
{
    char *a;
    a = "I love Fishc.com!";
    printf("%s\n", a);

    a += 7;    //�ȼ��� a = a+7
    printf("%s\n", a);
}
/**
a=a+7 ��a�ĸ����ĵ�ַ���ǵ��߸���ĸ�ĵ�ַ(a��0��ʼ)
                     ���Դ�ӡ�����Ǵӵ��߸���ĸ��ʼ

�����������ӡ�����ĵ������ǵ��߸���ĸ
**/
