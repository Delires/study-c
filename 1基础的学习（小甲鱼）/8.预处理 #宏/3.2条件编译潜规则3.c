/**
3.#if �������ʽ      ���ݳ������ʽ1��0,������ִ�г���1�����2
  ����1
  #else
  ����2
  #endif
**/
#include <stdio.h>
#define RUND 1//�ı�RUND��ֵ,�Ӷ��ı�ִ�к���
#define PI 3.1515926

void main()
{
    float r;
    double s;

    printf("intput a number:\n");
    scanf("%f", &r); //scanf������Ҫ�ϸ��Ӧ

#if RUND//RUNDΪ1ִ�г���1
    s = r*r*PI;
    printf("the cycle area is %lf", s);
#else   //RUNDΪ0ִ�г���2
    s = r*r;
    printf("the square area is %lf", s);
#endif
}
