/**
�궨�� #define ���� �ַ���

�궨������Ƕ�ף��ں궨�������ʹ���Ѿ�����ĺ���

����һ��Ϊ��д��ĸ������겻�ӷֺţ�д�ں�����
#endef�����������
**/

#include <stdio.h>

#define PI 3.1415926
#define S PI*r*r       //��һ���궨���PIǶ���ڵڶ����궨����

void fun(void);  //����һ�����ø������ĺ���

void main()
{
    double s, r;
    scanf("%lf", &r);

    s = S;
    //������S�滻��PI*r*r PI���滻��3.1415926

    printf("area = %g\n\n", s);

    fun();
}

void fun(void)  //���岻�ø��������з��صĺ���
{
    printf("%lf", PI);
}
