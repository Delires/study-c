/**
��̬����ֵ
       forѭ����scanf()���
**/
#include <stdio.h>
void main()
{
    int i ,max,a[10];
    printf("intput ten number\n");


    for(i=0; i<=9; i++)    //forѭ����scanf() ���Ƕ�̬����ֵ
    {
        scanf("%d", &a[i]);
    }


    for(i=0; i<=9; i++)
    {
        printf("%d\t", a[i]);
    }
}
