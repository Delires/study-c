/**
���涨 ����ֵreturn������(int z) Ӧ�ú� ����������ͬ(int max)
����ͬ�أ��ᷢ��ʲô���
**/
#include <stdio.h>
void main()
{
#if(0
     int max (float x, float y);//�зֺ�
#endif)
    int max (float x, float y);//�зֺ�
    float a, b;
    int c;
    scanf("%f %f", &a, &b);
    c = max(a, b);
    printf("Max is %d", c);
#if(0)
    printf("Max is %f", c);
#endif
}

#if(0)
int max (float x, float y)//û�ֺ�
#endif
int max (float x, float y)//û�ֺ�
{
    float z;           //����max��������������int
    z = x > y? x: y;   //���巵��ֵfloat
    return z;//z��float ����int max���Զ�ʡ��С�����
}

/**
a��ֵ����x��b��ֵ����y
z��ֵ����max��maxֵ����c
**/
