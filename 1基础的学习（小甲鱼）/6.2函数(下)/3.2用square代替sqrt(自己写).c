/**
�Լ�дһ����������square(�㳡)����sqrt
�����������ٶ��庯��
ѭ��������������һֱ������ƽ��=�����
**/
#include <stdio.h>
void main()
{
    float square(float x);
    float a, b;
    scanf("%f", &a);
    b = square(a);
    printf("��%f=%f", a, b);
}

float square(float x)
{
    float z;
    for(z=0; z<100  ;z=z+0.001)//û���ʽ2����ѭ���������жϾͲ���
    {
        if(z*z==x)
        {
            return (z);
        }
        else if(z*z<x+0.01&&z*z>x-0.01)
        {
            return (z);
        }

    }

}
