/**
�޲κ궨�壬��������(�ַ�����)��������
    #define ��ʶ�� �ַ���                  �磺#define pi 3.1415926

    #        ����Ԥ��������
    define   �궨������
    ��ʶ��   ����
    �ַ���   �����ǳ���,���ʽ��
**/
#include <stdio.h>
#define PI 3.1415926 //�޲κ궨��PI,�궨��󲻼ӷֺ�

void main()
{
    int r;
    double s;

    printf("please intput r:\n");
    scanf("%d", &r);

    s = r*r*PI;
    printf("%g", s);// %g�����ܸ�ʽ
}
