/**
�Ա�2.1���Լ�����һ��power�����������ú�����pow����ͬ��ʵ����η�
�����������ڶ���
��ѭ��
**/
#include <stdio.h>
int main()
{
  float power(double x, double y); //��������,��;
  float a, b, c;
  scanf("%f,%f", &a, &b);
  c = power(a, b);
  printf("%f^%f=%f", a, b, c);
  return 0;
}

float power(double x, double y)//���庯������;
{
    float z;
    z = x;
    for(int i=1; i<y ; i++)
    {
        z=z*x; //z=*x ������һ����˼
    }
    return (z);
}
