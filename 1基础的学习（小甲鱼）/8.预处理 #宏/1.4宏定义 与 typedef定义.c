/**
�궨�� ֻ�Ǽ򵥵��ַ�������,����Ԥ����ʱ��ɵ�
typedef ���ڱ���ʱ����,�����Ǽ򵥵Ĵ���,���Ƕ�����˵���������¶���
ָ��ռ4���ֽڣ��ַ�ռ1���ֽ�
**/

#include <stdio.h>

#define PIN1 char*  //�궨��
typedef char* PIN2;

void main()
{
    PIN1 x, y; //char *a, b;  ֻ�Ǽ��滻
    PIN2 a, b; //char *a, *b; ��ab�������¶���

                                  //sizeof()������ռ�ֽ�
    printf("#define:%d %d\n\n", sizeof(x), sizeof(y));
    printf("typedef:%d %d", sizeof(a), sizeof(b));
}
