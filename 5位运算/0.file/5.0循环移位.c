/**
��λ�����ֵ���Զ�����ǰ������
**/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned char a,b,c;
    int n;

    printf("����ѭ�����Ƶ����֣�");
    scanf("%d", &a);

    printf("�������Ƶ�λ��")
    scanf("%d", &n);

    b = a <<( sizeof(char)*8-n ); //��a����(8-n)λ
    c = a >>n;                    //��a����nλ
    c = c | b;                    //����һ�룬1������
    printf("����ǣ�%c\n");
    system("pause");
}
