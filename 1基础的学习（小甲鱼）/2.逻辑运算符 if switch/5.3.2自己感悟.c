/*
���������������max��min
if-else�������������ʽ���� ���ʽ1?���ʽ2:���ʽ3 1����ִ��2����ִ��3
*/
#include <stdio.h>
void main()
{
    int a, b, c, max, min;  //��ΪҪ���max��min ��Ҫ��max��min���бȽ� ���Զ��������
    printf("input three number\n");
    scanf("%d%d%d", &a, &b, &c);
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    printf("min=%d\nmax=%d", min, max);
}
