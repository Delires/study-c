/**
������庯��������������ǰ������Բ�����ǰ��������
**/

float add(float x, float y)//����add����
{
    float z;
    z = x+y;   //xy��ֵ�������Ѹ�ֵ
    return (z); //z��ֵ���ظ�����
}

#include <stdio.h>
void main()
{
    float add(float x, float y);//��������add
    float a, b, c;
    scanf("%f,%f", &a, &b);//���� , ����
    c = add(a, b); //add��������ֵ����c
                   //x=a  y=b
    printf("sum is %f\n", c);
}
#if(0)
float add(float x, float y)//����add����
{
    float z;
    z = x+y;   //xy��ֵ�������Ѹ�ֵ
    return (z); //z��ֵ���ظ�����
}
#endif

