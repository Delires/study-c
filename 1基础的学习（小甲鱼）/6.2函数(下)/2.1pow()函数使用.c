/**
ʵ��pow()��������֤
pow����
ͷ�ļ���math.h/cmath(C++��)
���ܣ�����x��y���ݡ�
����ֵ��x����Ϊ������yΪС��������xΪ0��yС�ڵ���0��������ָ���Ľ����
�������ͣ�double�ͣ�int��float����뾯�棡
**/
#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c;
  scanf("%f,%f", &a, &b);
  c = pow(a, b);
  printf("%f^%f=%f", a, b, c);
  return 0;//return 0����void main()
}

#if(0)
double pow(double x, double y)
{
    double z;
    z = pow(x, y); // a,b������������ڣ�Ҫ��xy
    return (z);
}
#endif  //��Ϊpow�����Ǻ����⺯�������Լ�����
