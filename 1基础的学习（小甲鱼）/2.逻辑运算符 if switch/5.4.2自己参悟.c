/*
�˳����Ǽ���������һ����
�û��������������������������������������Ǳ�����������������
��switch���
*/
#include <stdio.h>
void main()
{
    double a, c;
    char  b;
    printf("intput the experssion:a/(*-+)c\n");
    scanf("%lf%c%lf", &a, &b, &c);
    switch(b)
    {
        case'+':printf("%lf", a+c);break;
        case'-':printf("%lf", a-c);break;
        case'*':printf("%lf", a*c);break;
        case'/':printf("%lf", a/c);break;
        default:printf("input error");
    }
}
