/*****
�æ�/4��1-1/3+1/5-1/7+.....��ʽ��еĽ���ֵ��ֱ��ĳһ��ľ���ֵС��0Ϊֹ
��ʾ:1.Ҫȷ�����㾫��
     2.���Ӳ���,��ĸ����2,�����л�
     3.�����4
��ѭ�� fabs()����(�����ֵ) pow(x,y)��x^y
******/
#include <stdio.h>
#include <math.h>
void main()
{
    int s;
    float n, t ,pi;
    t = 1;
    pi= 0;
    n = 1.0;
    s = 1;
    while(fabs(t) > 1e-6)
    {
        pi = pi+t;
        n = n+2;
        s = -s;
        t = s/n;
    }
    pi = pi*4;
    printf("p1=%10.6f\n", pi);
}
