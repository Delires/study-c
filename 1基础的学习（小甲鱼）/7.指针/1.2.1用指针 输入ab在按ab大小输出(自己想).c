/**
��ָ���*&�������
*ȡ����ֵ
&ȡ������ַ
����ָ���������ǰͷ��*
����ab����������ab��С���
**/
#include <stdio.h>
void main()
{
    int a, b;
    int *pointer_1, *pointer_2; //����ָ�����ǰ�����*

    pointer_1 = &a;
    pointer_2 = &b;//��ab��ַ����ȥ��pointer�����ַ

    scanf("%d %d", &*pointer_1, &*pointer_2);
           //*pointer == a  &*pointer == &a

    if(*pointer_1 > *pointer_2)
    {
        printf("%d %d", *pointer_1, *pointer_2);
    }
    else
    {
        printf("%d %d", *pointer_2, *pointer_1);
    }
}
