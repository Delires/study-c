/**
ö����һ�����Ʒ�Χ�ı���ȡֵ�������ھ�Ҫ����ֻ���߸����·�Ҫ����ʮ������
ö�ٶ���
    enmun weekday
    {
     xxx,xxx,xxx,xxx,xxx,xxx
    }a,b,c;

    enmun
    {
     xxx,xxx,xxx,xxx,xxx,xxx
    }a,b,c;

ע�⣺
    ö��ֵ����ֱ��ö��Ԫ�ظ�ֵ
**/
#include <stdio.h>

void main()
{
    enum weekday
    {sun, mon, tue, wed, thu, fri, sat} a,b,c;

    a = sun; //ÿһ��ö�ٱ���������һ�����У���0��ʼ
    b = mon;
    c = tue;

    printf("%d, %d, %d", a, b, c);
    printf("\n\n");
}
