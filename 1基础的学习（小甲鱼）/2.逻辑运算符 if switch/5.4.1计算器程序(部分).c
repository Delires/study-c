/*
�˳����Ǽ���������һ����
�û��������������������������������������Ǳ�����������������
��switch���
*/
#include <stdio.h>
void main()
{
    float a, b;   //������float��Ӧ%f ˫����double��Ӧ%if
    char c;
    printf("input experssion:a+(-,*,/)\n");//a+(-*/)��������ſ������ĸ�ѡ��
    scanf("%f%c%f", &a, &c, &b);     //���ַ��� ���ܴ�ո� �ո�Ҳ��һ���ַ�
    switch(c)
    {
        case'+':printf("%f\n", a+b);break; //û��break�����ͻ�һֱִ����ȥ
        case'-':printf("%f\n", a-b);break;
        case'*':printf("%f\n", a*b);break;
        case'/':printf("%f\n", a/b);break;
        default:printf("input error\n");
    }
}
