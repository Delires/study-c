/**
��һ��һά���飬�ڷ�10���ɼ�������߷֣���ͷ֣�ƽ����
**/
#include <stdio.h>
int h=0, l=0, a=0; //ȫ�ֱ���
void mian()
{
   double p[10] = {77.5, 66.5, 88.5, 99, 56.32, 78.2, 65.33, 89.21, 78.59, 99.6};

   average(p, 10);
   maxmin(p, 10);
   printf("average=%f, max=%f, min=%f", a, h, l);

}
double average(double q[10])//���庯��
{

    int i=0;
    for(i=0; i<10; i++) //��ƽ��ֵ�ĺ���
    {
        a = a+q[i];
    }
    a = a/10;

}

double maxmin(double q[10])//ð�ݷ��������С
{
    double m;
    for(int i=0; i<10; i++)
    {
        if(a[i]<a[i+1])
        {
            m=a[i+1];
            a[i+1]=a[i];
            a[i]=m;
        }
    }
    h = a[0];
    l = a[9];
}

